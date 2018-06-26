// Generated Code - DO NOT EDIT !!
// generated by 'emugen'


#include <string.h>
#include "renderControl_opcodes.h"

#include "renderControl_dec.h"


#include <stdio.h>

typedef unsigned int tsize_t; // Target "size_t", which is 32-bit for now. It may or may not be the same as host's size_t when emugen is compiled.

static unsigned int GETDWORD(unsigned char *ptr)
{
    return *(unsigned char *)(ptr+0)
        |(*(unsigned char *)(ptr+1)<<8)
        |(*(unsigned char *)(ptr+2)<<16)
        |(*(unsigned char *)(ptr+3)<<24);
}
static unsigned short GETWORD(unsigned char *ptr)
{
    return *(unsigned char *)(ptr+0)
        |(*(unsigned char *)(ptr+1)<<8);
}
static unsigned char GETBYTE(unsigned char *ptr)
{
    return *(unsigned char *)(ptr+0);
}
static khronos_float_t GETFLOAT(unsigned char *ptr)
{
    khronos_float_t tmp;
    memcpy(&tmp,ptr,sizeof(khronos_float_t));
    return tmp;
}
size_t renderControl_decoder_context_t::decode(void *buf, size_t len, IOStream *stream)
{
                           
	size_t pos = 0;
	if (len < 8) return pos; 
	unsigned char *ptr = (unsigned char *)buf;
	bool unknownOpcode = false;  
#ifdef CHECK_GL_ERROR 
	char lastCall[256] = {0}; 
#endif 
	while ((len - pos >= 8) && !unknownOpcode) {   
		int opcode = GETDWORD(ptr);   
		unsigned int packetLen = GETDWORD(ptr + 4);
		if (len - pos < packetLen)  return pos; 
		switch(opcode) {
			case OP_rcGetRendererVersion:
			{
			size_t totalTmpSize = sizeof(GLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcGetRendererVersion()\n", stream);
#endif
			*(GLint *)(&tmpBuf[0]) = 			this->rcGetRendererVersion();
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcGetRendererVersion");
#endif
			break;
			case OP_rcGetEGLVersion:
			{
			size_t tmpPtr0Size = (size_t)GETDWORD(ptr + 8);
			size_t totalTmpSize = tmpPtr0Size;
			size_t tmpPtr1Size = (size_t)GETDWORD(ptr + 8 + 4);
			totalTmpSize += tmpPtr1Size;
			totalTmpSize += sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
			unsigned char *tmpPtr0 = &tmpBuf[0];
			memset(tmpPtr0, 0, 4);
			unsigned char *tmpPtr1 = &tmpBuf[0 + tmpPtr0Size];
			memset(tmpPtr1, 0, 4);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcGetEGLVersion(%p(%u) %p(%u) )\n", stream,(EGLint*)(tmpPtr0), GETDWORD(ptr + 8), (EGLint*)(tmpPtr1), GETDWORD(ptr + 8 + 4));
#endif
			*(EGLint *)(&tmpBuf[0 + tmpPtr0Size + tmpPtr1Size]) = 			this->rcGetEGLVersion((EGLint*)(tmpPtr0), (EGLint*)(tmpPtr1));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcGetEGLVersion");
#endif
			break;
			case OP_rcQueryEGLString:
			{
			size_t tmpPtr1Size = (size_t)GETDWORD(ptr + 8 + 4);
			size_t totalTmpSize = tmpPtr1Size;
			totalTmpSize += sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
			unsigned char *tmpPtr1 = &tmpBuf[0];
			memset(tmpPtr1, 0, 4);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcQueryEGLString(0x%08x %p(%u) 0x%08x )\n", stream,(EGLenum)GETDWORD(ptr + 8), (void*)(tmpPtr1), GETDWORD(ptr + 8 + 4), (EGLint)GETDWORD(ptr + 8 + 4 + 4));
#endif
			*(EGLint *)(&tmpBuf[0 + tmpPtr1Size]) = 			this->rcQueryEGLString((EGLenum)GETDWORD(ptr + 8), (void*)(tmpPtr1), (EGLint)GETDWORD(ptr + 8 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcQueryEGLString");
#endif
			break;
			case OP_rcGetGLString:
			{
			size_t tmpPtr1Size = (size_t)GETDWORD(ptr + 8 + 4);
			size_t totalTmpSize = tmpPtr1Size;
			totalTmpSize += sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
			unsigned char *tmpPtr1 = &tmpBuf[0];
			memset(tmpPtr1, 0, 4);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcGetGLString(0x%08x %p(%u) 0x%08x )\n", stream,(EGLenum)GETDWORD(ptr + 8), (void*)(tmpPtr1), GETDWORD(ptr + 8 + 4), (EGLint)GETDWORD(ptr + 8 + 4 + 4));
#endif
			*(EGLint *)(&tmpBuf[0 + tmpPtr1Size]) = 			this->rcGetGLString((EGLenum)GETDWORD(ptr + 8), (void*)(tmpPtr1), (EGLint)GETDWORD(ptr + 8 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcGetGLString");
#endif
			break;
			case OP_rcGetNumConfigs:
			{
			size_t tmpPtr0Size = (size_t)GETDWORD(ptr + 8);
			size_t totalTmpSize = tmpPtr0Size;
			totalTmpSize += sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
			unsigned char *tmpPtr0 = &tmpBuf[0];
			memset(tmpPtr0, 0, 4);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcGetNumConfigs(%p(%u) )\n", stream,(uint32_t*)(tmpPtr0), GETDWORD(ptr + 8));
#endif
			*(EGLint *)(&tmpBuf[0 + tmpPtr0Size]) = 			this->rcGetNumConfigs((uint32_t*)(tmpPtr0));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcGetNumConfigs");
#endif
			break;
			case OP_rcGetConfigs:
			{
			size_t tmpPtr1Size = (size_t)GETDWORD(ptr + 8 + 4);
			size_t totalTmpSize = tmpPtr1Size;
			totalTmpSize += sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
			unsigned char *tmpPtr1 = &tmpBuf[0];
			memset(tmpPtr1, 0, 4);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcGetConfigs(%d %p(%u) )\n", stream,(uint32_t)GETDWORD(ptr + 8), (GLuint*)(tmpPtr1), GETDWORD(ptr + 8 + 4));
#endif
			*(EGLint *)(&tmpBuf[0 + tmpPtr1Size]) = 			this->rcGetConfigs((uint32_t)GETDWORD(ptr + 8), (GLuint*)(tmpPtr1));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcGetConfigs");
#endif
			break;
			case OP_rcChooseConfig:
			{
			size_t tmpPtr2Size = (size_t)GETDWORD(ptr + 8 + 4 + (tsize_t)GETDWORD(ptr +8) + 4);
			size_t totalTmpSize = tmpPtr2Size;
			totalTmpSize += sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
			unsigned char *tmpPtr2 = &tmpBuf[0];
			memset(tmpPtr2, 0, 4);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcChooseConfig(%p(%u) %d %p(%u) %d )\n", stream,(EGLint*)(ptr + 8 + 4), GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4 + (tsize_t)GETDWORD(ptr +8)), (uint32_t*)(tmpPtr2), GETDWORD(ptr + 8 + 4 + (tsize_t)GETDWORD(ptr +8) + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + (tsize_t)GETDWORD(ptr +8) + 4 + 4));
#endif
			*(EGLint *)(&tmpBuf[0 + tmpPtr2Size]) = 			this->rcChooseConfig((EGLint*)(ptr + 8 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + (tsize_t)GETDWORD(ptr +8)), tmpPtr2Size == 0 ? NULL : (uint32_t*)(tmpPtr2), (uint32_t)GETDWORD(ptr + 8 + 4 + (tsize_t)GETDWORD(ptr +8) + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcChooseConfig");
#endif
			break;
			case OP_rcGetFBParam:
			{
			size_t totalTmpSize = sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcGetFBParam(0x%08x )\n", stream,(EGLint)GETDWORD(ptr + 8));
#endif
			*(EGLint *)(&tmpBuf[0]) = 			this->rcGetFBParam((EGLint)GETDWORD(ptr + 8));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcGetFBParam");
#endif
			break;
			case OP_rcCreateContext:
			{
			size_t totalTmpSize = sizeof(uint32_t);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcCreateContext(%d %d %d )\n", stream,(uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4));
#endif
			*(uint32_t *)(&tmpBuf[0]) = 			this->rcCreateContext((uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcCreateContext");
#endif
			break;
			case OP_rcDestroyContext:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcDestroyContext(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			this->rcDestroyContext((uint32_t)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcDestroyContext");
#endif
			break;
			case OP_rcCreateWindowSurface:
			{
			size_t totalTmpSize = sizeof(uint32_t);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcCreateWindowSurface(%d %d %d )\n", stream,(uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4));
#endif
			*(uint32_t *)(&tmpBuf[0]) = 			this->rcCreateWindowSurface((uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcCreateWindowSurface");
#endif
			break;
			case OP_rcDestroyWindowSurface:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcDestroyWindowSurface(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			this->rcDestroyWindowSurface((uint32_t)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcDestroyWindowSurface");
#endif
			break;
			case OP_rcCreateColorBuffer:
			{
			size_t totalTmpSize = sizeof(uint32_t);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcCreateColorBuffer(%d %d 0x%08x )\n", stream,(uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4));
#endif
			*(uint32_t *)(&tmpBuf[0]) = 			this->rcCreateColorBuffer((uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcCreateColorBuffer");
#endif
			break;
			case OP_rcOpenColorBuffer:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcOpenColorBuffer(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			this->rcOpenColorBuffer((uint32_t)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcOpenColorBuffer");
#endif
			break;
			case OP_rcCloseColorBuffer:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcCloseColorBuffer(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			this->rcCloseColorBuffer((uint32_t)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcCloseColorBuffer");
#endif
			break;
			case OP_rcSetWindowColorBuffer:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcSetWindowColorBuffer(%d %d )\n", stream,(uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4));
#endif
			this->rcSetWindowColorBuffer((uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcSetWindowColorBuffer");
#endif
			break;
			case OP_rcFlushWindowColorBuffer:
			{
			size_t totalTmpSize = sizeof(int);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcFlushWindowColorBuffer(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			*(int *)(&tmpBuf[0]) = 			this->rcFlushWindowColorBuffer((uint32_t)GETDWORD(ptr + 8));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcFlushWindowColorBuffer");
#endif
			break;
			case OP_rcMakeCurrent:
			{
			size_t totalTmpSize = sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcMakeCurrent(%d %d %d )\n", stream,(uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4));
#endif
			*(EGLint *)(&tmpBuf[0]) = 			this->rcMakeCurrent((uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcMakeCurrent");
#endif
			break;
			case OP_rcFBPost:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcFBPost(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			this->rcFBPost((uint32_t)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcFBPost");
#endif
			break;
			case OP_rcFBSetSwapInterval:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcFBSetSwapInterval(0x%08x )\n", stream,(EGLint)GETDWORD(ptr + 8));
#endif
			this->rcFBSetSwapInterval((EGLint)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcFBSetSwapInterval");
#endif
			break;
			case OP_rcBindTexture:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcBindTexture(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			this->rcBindTexture((uint32_t)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcBindTexture");
#endif
			break;
			case OP_rcBindRenderbuffer:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcBindRenderbuffer(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			this->rcBindRenderbuffer((uint32_t)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcBindRenderbuffer");
#endif
			break;
			case OP_rcColorBufferCacheFlush:
			{
			size_t totalTmpSize = sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcColorBufferCacheFlush(%d 0x%08x %d )\n", stream,(uint32_t)GETDWORD(ptr + 8), (EGLint)GETDWORD(ptr + 8 + 4), (int)GETDWORD(ptr + 8 + 4 + 4));
#endif
			*(EGLint *)(&tmpBuf[0]) = 			this->rcColorBufferCacheFlush((uint32_t)GETDWORD(ptr + 8), (EGLint)GETDWORD(ptr + 8 + 4), (int)GETDWORD(ptr + 8 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcColorBufferCacheFlush");
#endif
			break;
			case OP_rcReadColorBuffer:
			{
			size_t tmpPtr7Size = (size_t)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4);
			size_t totalTmpSize = tmpPtr7Size;
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
			unsigned char *tmpPtr7 = &tmpBuf[0];
			memset(tmpPtr7, 0, 4);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcReadColorBuffer(%d %d %d %d %d 0x%08x 0x%08x %p(%u) )\n", stream,(uint32_t)GETDWORD(ptr + 8), (GLint)GETDWORD(ptr + 8 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4), (void*)(tmpPtr7), GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4));
#endif
			this->rcReadColorBuffer((uint32_t)GETDWORD(ptr + 8), (GLint)GETDWORD(ptr + 8 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4), (void*)(tmpPtr7));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcReadColorBuffer");
#endif
			break;
			case OP_rcUpdateColorBuffer:
			{
			size_t totalTmpSize = sizeof(int);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcUpdateColorBuffer(%d %d %d %d %d 0x%08x 0x%08x %p(%u) )\n", stream,(uint32_t)GETDWORD(ptr + 8), (GLint)GETDWORD(ptr + 8 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4), (void*)(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4), GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4));
#endif
			*(int *)(&tmpBuf[0]) = 			this->rcUpdateColorBuffer((uint32_t)GETDWORD(ptr + 8), (GLint)GETDWORD(ptr + 8 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4), (void*)(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcUpdateColorBuffer");
#endif
			break;
			case OP_rcOpenColorBuffer2:
			{
			size_t totalTmpSize = sizeof(int);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcOpenColorBuffer2(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			*(int *)(&tmpBuf[0]) = 			this->rcOpenColorBuffer2((uint32_t)GETDWORD(ptr + 8));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcOpenColorBuffer2");
#endif
			break;
			case OP_rcCreateClientImage:
			{
			size_t totalTmpSize = sizeof(uint32_t);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcCreateClientImage(%d 0x%08x %u )\n", stream,(uint32_t)GETDWORD(ptr + 8), (EGLenum)GETDWORD(ptr + 8 + 4), (GLuint)GETDWORD(ptr + 8 + 4 + 4));
#endif
			*(uint32_t *)(&tmpBuf[0]) = 			this->rcCreateClientImage((uint32_t)GETDWORD(ptr + 8), (EGLenum)GETDWORD(ptr + 8 + 4), (GLuint)GETDWORD(ptr + 8 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcCreateClientImage");
#endif
			break;
			case OP_rcDestroyClientImage:
			{
			size_t totalTmpSize = sizeof(int);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcDestroyClientImage(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			*(int *)(&tmpBuf[0]) = 			this->rcDestroyClientImage((uint32_t)GETDWORD(ptr + 8));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcDestroyClientImage");
#endif
			break;
			case OP_rcSelectChecksumHelper:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcSelectChecksumHelper(%d %d )\n", stream,(uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4));
#endif
			this->rcSelectChecksumHelper((uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcSelectChecksumHelper");
#endif
			break;
			case OP_rcCreateSyncKHR:
			{
			size_t tmpPtr4Size = (size_t)GETDWORD(ptr + 8 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4) + 4 + 4);
			size_t totalTmpSize = tmpPtr4Size;
			size_t tmpPtr5Size = (size_t)GETDWORD(ptr + 8 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4) + 4 + 4 + 4);
			totalTmpSize += tmpPtr5Size;
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
			unsigned char *tmpPtr4 = &tmpBuf[0];
			memset(tmpPtr4, 0, 4);
			unsigned char *tmpPtr5 = &tmpBuf[0 + tmpPtr4Size];
			memset(tmpPtr5, 0, 4);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcCreateSyncKHR(0x%08x %p(%u) %d %d %p(%u) %p(%u) )\n", stream,(EGLenum)GETDWORD(ptr + 8), (EGLint*)(ptr + 8 + 4 + 4), GETDWORD(ptr + 8 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4)), (int)GETDWORD(ptr + 8 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4) + 4), (uint64_t*)(tmpPtr4), GETDWORD(ptr + 8 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4) + 4 + 4), (uint64_t*)(tmpPtr5), GETDWORD(ptr + 8 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4) + 4 + 4 + 4));
#endif
			this->rcCreateSyncKHR((EGLenum)GETDWORD(ptr + 8), (EGLint*)(ptr + 8 + 4 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4)), (int)GETDWORD(ptr + 8 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4) + 4), (uint64_t*)(tmpPtr4), (uint64_t*)(tmpPtr5));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcCreateSyncKHR");
#endif
			break;
			case OP_rcClientWaitSyncKHR:
			{
			size_t totalTmpSize = sizeof(EGLint);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcClientWaitSyncKHR(%lld 0x%08x %lld )\n", stream,(uint64_t)GETDWORD(ptr + 8), (EGLint)GETDWORD(ptr + 8 + 8), (uint64_t)GETDWORD(ptr + 8 + 8 + 4));
#endif
			*(EGLint *)(&tmpBuf[0]) = 			this->rcClientWaitSyncKHR((uint64_t)GETDWORD(ptr + 8), (EGLint)GETDWORD(ptr + 8 + 8), (uint64_t)GETDWORD(ptr + 8 + 8 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcClientWaitSyncKHR");
#endif
			break;
			case OP_rcFlushWindowColorBufferAsync:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcFlushWindowColorBufferAsync(%d )\n", stream,(uint32_t)GETDWORD(ptr + 8));
#endif
			this->rcFlushWindowColorBufferAsync((uint32_t)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcFlushWindowColorBufferAsync");
#endif
			break;
			case OP_rcDestroySyncKHR:
			{
			size_t totalTmpSize = sizeof(int);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcDestroySyncKHR(%lld )\n", stream,(uint64_t)GETDWORD(ptr + 8));
#endif
			*(int *)(&tmpBuf[0]) = 			this->rcDestroySyncKHR((uint64_t)GETDWORD(ptr + 8));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcDestroySyncKHR");
#endif
			break;
			case OP_rcSetPuid:
			{
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcSetPuid(%lld )\n", stream,(uint64_t)GETDWORD(ptr + 8));
#endif
			this->rcSetPuid((uint64_t)GETDWORD(ptr + 8));
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcSetPuid");
#endif
			break;
			case OP_rcUpdateColorBufferDMA:
			{
			size_t totalTmpSize = sizeof(int);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcUpdateColorBufferDMA(%d %d %d %d %d 0x%08x 0x%08x %p(%u) %d )\n", stream,(uint32_t)GETDWORD(ptr + 8), (GLint)GETDWORD(ptr + 8 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4), (void*)(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4), GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4 + 4 + 4 + 4 + 4 + 4 + 4)));
#endif
			*(int *)(&tmpBuf[0]) = 			this->rcUpdateColorBufferDMA((uint32_t)GETDWORD(ptr + 8), (GLint)GETDWORD(ptr + 8 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4), (GLint)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4), (void*)(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4), (uint32_t)GETDWORD(ptr + 8 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + (tsize_t)GETDWORD(ptr +8 + 4 + 4 + 4 + 4 + 4 + 4 + 4)));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcUpdateColorBufferDMA");
#endif
			break;
			case OP_rcCreateColorBufferDMA:
			{
			size_t totalTmpSize = sizeof(uint32_t);
			unsigned char *tmpBuf = stream->alloc(totalTmpSize);
#ifdef DEBUG_PRINTOUT
			fprintf(stderr,"renderControl(%p): rcCreateColorBufferDMA(%d %d 0x%08x %d )\n", stream,(uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4), (int)GETDWORD(ptr + 8 + 4 + 4 + 4));
#endif
			*(uint32_t *)(&tmpBuf[0]) = 			this->rcCreateColorBufferDMA((uint32_t)GETDWORD(ptr + 8), (uint32_t)GETDWORD(ptr + 8 + 4), (GLenum)GETDWORD(ptr + 8 + 4 + 4), (int)GETDWORD(ptr + 8 + 4 + 4 + 4));
			stream->writeback();
			pos += GETDWORD(ptr + 4);
			ptr += GETDWORD(ptr + 4);
			}
#ifdef CHECK_GL_ERROR
			sprintf(lastCall, "rcCreateColorBufferDMA");
#endif
			break;
			default:
				unknownOpcode = true;
		} //switch
	} // while
	return pos;
}
