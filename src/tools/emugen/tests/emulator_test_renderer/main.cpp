/*
* Copyright (C) 2011 The Android Open Source Project
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#undef HAVE_MALLOC_H
#include <SDL.h>
#include <SDL_syswm.h>
#include <stdio.h>
#include <string.h>
#include "libOpenglRender/render_api.h"
#include <EventInjector.h>

static int convert_keysym(int sym); // forward



#ifdef __linux__
#include <X11/Xlib.h>
#endif

char g_szIP[50]; // 端口5559
#ifdef _WIN32
#include <conio.h>
#include <winsock2.h>
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
#else
#include <netinet/in.h>
#include <unistd.h>
int main(int argc, char *argv[])
#endif
{
    int portNum = 22468;
    int winWidth = 320;
    int winHeight = 480;
    int width, height;
    int mouseDown = 0;
    const char* env = getenv("ANDROID_WINDOW_SIZE");
    FBNativeWindowType windowId = NULL;
    EventInjector* injector;
    int consolePort = 5554;
    // 设置环境变量
    //prependSharedLibraryPath("lib");
#if 1 
#ifdef _WIN32
{
    printf("ip = %s\n", lpCmdLine);
    strcpy(g_szIP, lpCmdLine);
}
#else
    if (argc == 2)
    {
        // 输入地址
        printf("ip = %s\n", argv[1]);
        strcpy(g_szIP, argv[1]);
    }
#endif
#endif
    if (env && sscanf(env, "%dx%d", &width, &height) == 2) {
        winWidth = width;
        winHeight = height;
    }

#ifdef __linux__
    // some OpenGL implementations may call X functions
    // it is safer to synchronize all X calls made by all the
    // rendering threads. (although the calls we do are locked
    // in the FrameBuffer singleton object).
    //XInitThreads();
#endif

    //
    // Inialize SDL window 
    //
    if (SDL_Init(SDL_INIT_NOPARACHUTE | SDL_INIT_VIDEO)) {
        fprintf(stderr,"SDL init failed: %s\n", SDL_GetError());
        return -1;
    }

    SDL_Surface *surface = SDL_SetVideoMode(winWidth, winHeight, 32, SDL_SWSURFACE);
    if (surface == NULL) {
        fprintf(stderr,"Failed to set video mode: %s\n", SDL_GetError());
        return -1;
    }

    SDL_SysWMinfo  wminfo;
    memset(&wminfo, 0, sizeof(wminfo));
    SDL_GetWMInfo(&wminfo);
#ifdef _WIN32
    windowId = wminfo.window;
    WSADATA  wsaData;
    int      rc = WSAStartup( MAKEWORD(2,2), &wsaData);
    if (rc != 0) {
            printf( "could not initialize Winsock\n" );
    }
#elif __linux__
    windowId = wminfo.info.x11.window;
#elif __APPLE__
    windowId = wminfo.nsWindowPtr;
#endif

    printf("initializing renderer process\n");

    //
    // initialize OpenGL renderer to render in our window
    //
    initLibrary();
    char addr[256];
    bool inited = initOpenGLRenderer(winWidth, winHeight, addr, sizeof(addr));
    if (!inited) {
        return -1;
    }
    printf("renderer process started\n");

    float zRot = 0.0f;
    inited = createOpenGLSubwindow(windowId, 0, 0,
                                   winWidth, winHeight, zRot);
    if (!inited) {
        printf("failed to create OpenGL subwindow\n"); 
        stopOpenGLRenderer();
        return -1;
    }
    int subwinWidth = winWidth;
    int subwinHeight = winHeight;
    //#ifdef _WIN32
    if (1)
    {
        #ifdef _WIN32
        #define s_addr S_un.S_addr
        #define socklen_t int
        #else
        #define SOCKET int
        #define closesocket close
        #endif
        SOCKET serSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);   
        if(serSocket == -1/*INVALID_SOCKET*/)  
        {  
            printf("socket error !");  
            return 0;  
        }  
      
        sockaddr_in serAddr;  
        serAddr.sin_family = AF_INET;  
        serAddr.sin_port = htons(8888);
        serAddr.sin_addr.s_addr = INADDR_ANY;
        
        if(bind(serSocket, (sockaddr *)&serAddr, sizeof(serAddr)) == -1/*SOCKET_ERROR*/)  
        {  
            printf("bind error !");  
            closesocket(serSocket);  
            return 0;  
        }  
          
        sockaddr_in remoteAddr;  
        int nAddrLen = sizeof(remoteAddr);   
        while (true)  
        {  
            char recvData[255];
            int ret = recvfrom(serSocket, recvData, 255, 0, (sockaddr *)&remoteAddr, (socklen_t*)&nAddrLen);  
            if (ret > 0)  
            {
                recvData[ret] = 0x00;
                // printf(recvData);
                int opcode = recvData[0];
                char *lpBuff = (char*)(&recvData[1]);
                if (opcode == 1)
                {
                    // get ip
                    strcpy(g_szIP, lpBuff);
                    printf("recv ip=%s\n", g_szIP);
                    break;
                }
                printf("lpBuff=%s\n", lpBuff);
            }
            #if 0
            char * sendData = "recv\n";  
            sendto(serSocket, sendData, strlen(sendData), 0, (sockaddr *)&remoteAddr, nAddrLen);      
            #endif
        }  
        closesocket(serSocket);   
        #undef SOCKET
        #undef closesocket
        #undef s_addr
        #undef socklen_t 
    }
    //#endif
    injector = new EventInjector(consolePort);

    // Just wait until the window is closed
    SDL_Event ev;

    for (;;) {
        injector->wait(1000/15);
        injector->poll();

        while (SDL_PollEvent(&ev)) {
            switch (ev.type) {
            case SDL_MOUSEBUTTONDOWN:
                if (!mouseDown) {
                    injector->sendMouseDown(ev.button.x, ev.button.y);
                    mouseDown = 1;
                }
                break;
            case SDL_MOUSEBUTTONUP:
                if (mouseDown) {
                    injector->sendMouseUp(ev.button.x,ev.button.y);
                    mouseDown = 0;
                }
                break;
            case SDL_MOUSEMOTION:
                if (mouseDown)
                    injector->sendMouseMotion(ev.button.x,ev.button.y);
                break;

            case SDL_KEYDOWN:
#ifdef __APPLE__
                /* special code to deal with Command-Q properly */
                if (ev.key.keysym.sym == SDLK_q &&
                    ev.key.keysym.mod & KMOD_META) {
                  goto EXIT;
                }
#endif
                injector->sendKeyDown(convert_keysym(ev.key.keysym.sym));

                if (ev.key.keysym.sym == SDLK_KP_MINUS) {
                    subwinWidth /= 2;
                    subwinHeight /= 2;
                    
                    bool stat = destroyOpenGLSubwindow();
                    printf("destroy subwin returned %d\n", stat);
                    stat = createOpenGLSubwindow(windowId,
                                                (winWidth - subwinWidth) / 2,
                                                (winHeight - subwinHeight) / 2,
                                                subwinWidth, subwinHeight, 
                                                zRot);
                    printf("create subwin returned %d\n", stat);
                }
                else if (ev.key.keysym.sym == SDLK_KP_PLUS) {
                    subwinWidth *= 2;
                    subwinHeight *= 2;

                    bool stat = destroyOpenGLSubwindow();
                    printf("destroy subwin returned %d\n", stat);
                    stat = createOpenGLSubwindow(windowId,
                                                (winWidth - subwinWidth) / 2,
                                                (winHeight - subwinHeight) / 2,
                                                subwinWidth, subwinHeight, 
                                                zRot);
                    printf("create subwin returned %d\n", stat);
                }
                else if (ev.key.keysym.sym == SDLK_KP_MULTIPLY) {
                    zRot += 10.0f;
                    setOpenGLDisplayRotation(zRot);
                }
                else if (ev.key.keysym.sym == SDLK_KP_ENTER) {
                    repaintOpenGLDisplay();
                }
                break;
            case SDL_KEYUP:
                injector->sendKeyUp(convert_keysym(ev.key.keysym.sym));
                break;
            case SDL_QUIT:
                goto EXIT;
            }
        }
    }
EXIT:
    //
    // stop the renderer
    //
    printf("stopping the renderer process\n");
    stopOpenGLRenderer();

    return 0;
}

static int convert_keysym(int sym)
{
#define  EE(x,y)   SDLK_##x, EventInjector::KEY_##y,
    static const int keymap[] = {
        EE(LEFT,LEFT)
        EE(RIGHT,RIGHT)
        EE(DOWN,DOWN)
        EE(UP,UP)
        EE(RETURN,ENTER)
        EE(F1,SOFT1)
        EE(ESCAPE,BACK)
        EE(HOME,HOME)
        -1
    };
    int nn;
    for (nn = 0; keymap[nn] >= 0; nn += 2) {
        if (keymap[nn] == sym)
            return keymap[nn+1];
    }
    return sym;
}
