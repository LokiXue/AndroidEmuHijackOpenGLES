// Generated Code - DO NOT EDIT !!
// generated by 'emugen'


#include <string.h>
#include "renderControl_server_context.h"


#include <stdio.h>

int renderControl_server_context_t::initDispatchByName(void *(*getProc)(const char *, void *userData), void *userData)
{
	void *ptr;

	ptr = getProc("rcGetRendererVersion", userData); if(ptr) set_rcGetRendererVersion((rcGetRendererVersion_server_proc_t)ptr);
	ptr = getProc("rcGetEGLVersion", userData); if(ptr) set_rcGetEGLVersion((rcGetEGLVersion_server_proc_t)ptr);
	ptr = getProc("rcQueryEGLString", userData); if(ptr) set_rcQueryEGLString((rcQueryEGLString_server_proc_t)ptr);
	ptr = getProc("rcGetGLString", userData); if(ptr) set_rcGetGLString((rcGetGLString_server_proc_t)ptr);
	ptr = getProc("rcGetNumConfigs", userData); if(ptr) set_rcGetNumConfigs((rcGetNumConfigs_server_proc_t)ptr);
	ptr = getProc("rcGetConfigs", userData); if(ptr) set_rcGetConfigs((rcGetConfigs_server_proc_t)ptr);
	ptr = getProc("rcChooseConfig", userData); if(ptr) set_rcChooseConfig((rcChooseConfig_server_proc_t)ptr);
	ptr = getProc("rcGetFBParam", userData); if(ptr) set_rcGetFBParam((rcGetFBParam_server_proc_t)ptr);
	ptr = getProc("rcCreateContext", userData); if(ptr) set_rcCreateContext((rcCreateContext_server_proc_t)ptr);
	ptr = getProc("rcDestroyContext", userData); if(ptr) set_rcDestroyContext((rcDestroyContext_server_proc_t)ptr);
	ptr = getProc("rcCreateWindowSurface", userData); if(ptr) set_rcCreateWindowSurface((rcCreateWindowSurface_server_proc_t)ptr);
	ptr = getProc("rcDestroyWindowSurface", userData); if(ptr) set_rcDestroyWindowSurface((rcDestroyWindowSurface_server_proc_t)ptr);
	ptr = getProc("rcCreateColorBuffer", userData); if(ptr) set_rcCreateColorBuffer((rcCreateColorBuffer_server_proc_t)ptr);
	ptr = getProc("rcOpenColorBuffer", userData); if(ptr) set_rcOpenColorBuffer((rcOpenColorBuffer_server_proc_t)ptr);
	ptr = getProc("rcCloseColorBuffer", userData); if(ptr) set_rcCloseColorBuffer((rcCloseColorBuffer_server_proc_t)ptr);
	ptr = getProc("rcSetWindowColorBuffer", userData); if(ptr) set_rcSetWindowColorBuffer((rcSetWindowColorBuffer_server_proc_t)ptr);
	ptr = getProc("rcFlushWindowColorBuffer", userData); if(ptr) set_rcFlushWindowColorBuffer((rcFlushWindowColorBuffer_server_proc_t)ptr);
	ptr = getProc("rcMakeCurrent", userData); if(ptr) set_rcMakeCurrent((rcMakeCurrent_server_proc_t)ptr);
	ptr = getProc("rcFBPost", userData); if(ptr) set_rcFBPost((rcFBPost_server_proc_t)ptr);
	ptr = getProc("rcFBSetSwapInterval", userData); if(ptr) set_rcFBSetSwapInterval((rcFBSetSwapInterval_server_proc_t)ptr);
	ptr = getProc("rcBindTexture", userData); if(ptr) set_rcBindTexture((rcBindTexture_server_proc_t)ptr);
	ptr = getProc("rcBindRenderbuffer", userData); if(ptr) set_rcBindRenderbuffer((rcBindRenderbuffer_server_proc_t)ptr);
	ptr = getProc("rcColorBufferCacheFlush", userData); if(ptr) set_rcColorBufferCacheFlush((rcColorBufferCacheFlush_server_proc_t)ptr);
	ptr = getProc("rcReadColorBuffer", userData); if(ptr) set_rcReadColorBuffer((rcReadColorBuffer_server_proc_t)ptr);
	ptr = getProc("rcUpdateColorBuffer", userData); if(ptr) set_rcUpdateColorBuffer((rcUpdateColorBuffer_server_proc_t)ptr);
	ptr = getProc("rcOpenColorBuffer2", userData); if(ptr) set_rcOpenColorBuffer2((rcOpenColorBuffer2_server_proc_t)ptr);
	ptr = getProc("rcCreateClientImage", userData); if(ptr) set_rcCreateClientImage((rcCreateClientImage_server_proc_t)ptr);
	ptr = getProc("rcDestroyClientImage", userData); if(ptr) set_rcDestroyClientImage((rcDestroyClientImage_server_proc_t)ptr);
	ptr = getProc("rcSelectChecksumHelper", userData); if(ptr) set_rcSelectChecksumHelper((rcSelectChecksumHelper_server_proc_t)ptr);
	ptr = getProc("rcCreateSyncKHR", userData); if(ptr) set_rcCreateSyncKHR((rcCreateSyncKHR_server_proc_t)ptr);
	ptr = getProc("rcClientWaitSyncKHR", userData); if(ptr) set_rcClientWaitSyncKHR((rcClientWaitSyncKHR_server_proc_t)ptr);
	ptr = getProc("rcFlushWindowColorBufferAsync", userData); if(ptr) set_rcFlushWindowColorBufferAsync((rcFlushWindowColorBufferAsync_server_proc_t)ptr);
	ptr = getProc("rcDestroySyncKHR", userData); if(ptr) set_rcDestroySyncKHR((rcDestroySyncKHR_server_proc_t)ptr);
	ptr = getProc("rcSetPuid", userData); if(ptr) set_rcSetPuid((rcSetPuid_server_proc_t)ptr);
	ptr = getProc("rcUpdateColorBufferDMA", userData); if(ptr) set_rcUpdateColorBufferDMA((rcUpdateColorBufferDMA_server_proc_t)ptr);
	ptr = getProc("rcCreateColorBufferDMA", userData); if(ptr) set_rcCreateColorBufferDMA((rcCreateColorBufferDMA_server_proc_t)ptr);
	return 0;
}

