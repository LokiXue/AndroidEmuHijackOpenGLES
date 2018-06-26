// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#ifndef __renderControl_server_context_t_h
#define __renderControl_server_context_t_h

#include "renderControl_server_proc.h"


struct renderControl_server_context_t {

	rcGetRendererVersion_server_proc_t rcGetRendererVersion;
	rcGetEGLVersion_server_proc_t rcGetEGLVersion;
	rcQueryEGLString_server_proc_t rcQueryEGLString;
	rcGetGLString_server_proc_t rcGetGLString;
	rcGetNumConfigs_server_proc_t rcGetNumConfigs;
	rcGetConfigs_server_proc_t rcGetConfigs;
	rcChooseConfig_server_proc_t rcChooseConfig;
	rcGetFBParam_server_proc_t rcGetFBParam;
	rcCreateContext_server_proc_t rcCreateContext;
	rcDestroyContext_server_proc_t rcDestroyContext;
	rcCreateWindowSurface_server_proc_t rcCreateWindowSurface;
	rcDestroyWindowSurface_server_proc_t rcDestroyWindowSurface;
	rcCreateColorBuffer_server_proc_t rcCreateColorBuffer;
	rcOpenColorBuffer_server_proc_t rcOpenColorBuffer;
	rcCloseColorBuffer_server_proc_t rcCloseColorBuffer;
	rcSetWindowColorBuffer_server_proc_t rcSetWindowColorBuffer;
	rcFlushWindowColorBuffer_server_proc_t rcFlushWindowColorBuffer;
	rcMakeCurrent_server_proc_t rcMakeCurrent;
	rcFBPost_server_proc_t rcFBPost;
	rcFBSetSwapInterval_server_proc_t rcFBSetSwapInterval;
	rcBindTexture_server_proc_t rcBindTexture;
	rcBindRenderbuffer_server_proc_t rcBindRenderbuffer;
	rcColorBufferCacheFlush_server_proc_t rcColorBufferCacheFlush;
	rcReadColorBuffer_server_proc_t rcReadColorBuffer;
	rcUpdateColorBuffer_server_proc_t rcUpdateColorBuffer;
	rcOpenColorBuffer2_server_proc_t rcOpenColorBuffer2;
	rcCreateClientImage_server_proc_t rcCreateClientImage;
	rcDestroyClientImage_server_proc_t rcDestroyClientImage;
	rcSelectChecksumHelper_server_proc_t rcSelectChecksumHelper;
	rcCreateSyncKHR_server_proc_t rcCreateSyncKHR;
	rcClientWaitSyncKHR_server_proc_t rcClientWaitSyncKHR;
	rcFlushWindowColorBufferAsync_server_proc_t rcFlushWindowColorBufferAsync;
	rcDestroySyncKHR_server_proc_t rcDestroySyncKHR;
	rcSetPuid_server_proc_t rcSetPuid;
	rcUpdateColorBufferDMA_server_proc_t rcUpdateColorBufferDMA;
	rcCreateColorBufferDMA_server_proc_t rcCreateColorBufferDMA;
	//Accessors 
	virtual rcGetRendererVersion_server_proc_t set_rcGetRendererVersion(rcGetRendererVersion_server_proc_t f) { rcGetRendererVersion_server_proc_t retval = rcGetRendererVersion; rcGetRendererVersion = f; return retval;}
	virtual rcGetEGLVersion_server_proc_t set_rcGetEGLVersion(rcGetEGLVersion_server_proc_t f) { rcGetEGLVersion_server_proc_t retval = rcGetEGLVersion; rcGetEGLVersion = f; return retval;}
	virtual rcQueryEGLString_server_proc_t set_rcQueryEGLString(rcQueryEGLString_server_proc_t f) { rcQueryEGLString_server_proc_t retval = rcQueryEGLString; rcQueryEGLString = f; return retval;}
	virtual rcGetGLString_server_proc_t set_rcGetGLString(rcGetGLString_server_proc_t f) { rcGetGLString_server_proc_t retval = rcGetGLString; rcGetGLString = f; return retval;}
	virtual rcGetNumConfigs_server_proc_t set_rcGetNumConfigs(rcGetNumConfigs_server_proc_t f) { rcGetNumConfigs_server_proc_t retval = rcGetNumConfigs; rcGetNumConfigs = f; return retval;}
	virtual rcGetConfigs_server_proc_t set_rcGetConfigs(rcGetConfigs_server_proc_t f) { rcGetConfigs_server_proc_t retval = rcGetConfigs; rcGetConfigs = f; return retval;}
	virtual rcChooseConfig_server_proc_t set_rcChooseConfig(rcChooseConfig_server_proc_t f) { rcChooseConfig_server_proc_t retval = rcChooseConfig; rcChooseConfig = f; return retval;}
	virtual rcGetFBParam_server_proc_t set_rcGetFBParam(rcGetFBParam_server_proc_t f) { rcGetFBParam_server_proc_t retval = rcGetFBParam; rcGetFBParam = f; return retval;}
	virtual rcCreateContext_server_proc_t set_rcCreateContext(rcCreateContext_server_proc_t f) { rcCreateContext_server_proc_t retval = rcCreateContext; rcCreateContext = f; return retval;}
	virtual rcDestroyContext_server_proc_t set_rcDestroyContext(rcDestroyContext_server_proc_t f) { rcDestroyContext_server_proc_t retval = rcDestroyContext; rcDestroyContext = f; return retval;}
	virtual rcCreateWindowSurface_server_proc_t set_rcCreateWindowSurface(rcCreateWindowSurface_server_proc_t f) { rcCreateWindowSurface_server_proc_t retval = rcCreateWindowSurface; rcCreateWindowSurface = f; return retval;}
	virtual rcDestroyWindowSurface_server_proc_t set_rcDestroyWindowSurface(rcDestroyWindowSurface_server_proc_t f) { rcDestroyWindowSurface_server_proc_t retval = rcDestroyWindowSurface; rcDestroyWindowSurface = f; return retval;}
	virtual rcCreateColorBuffer_server_proc_t set_rcCreateColorBuffer(rcCreateColorBuffer_server_proc_t f) { rcCreateColorBuffer_server_proc_t retval = rcCreateColorBuffer; rcCreateColorBuffer = f; return retval;}
	virtual rcOpenColorBuffer_server_proc_t set_rcOpenColorBuffer(rcOpenColorBuffer_server_proc_t f) { rcOpenColorBuffer_server_proc_t retval = rcOpenColorBuffer; rcOpenColorBuffer = f; return retval;}
	virtual rcCloseColorBuffer_server_proc_t set_rcCloseColorBuffer(rcCloseColorBuffer_server_proc_t f) { rcCloseColorBuffer_server_proc_t retval = rcCloseColorBuffer; rcCloseColorBuffer = f; return retval;}
	virtual rcSetWindowColorBuffer_server_proc_t set_rcSetWindowColorBuffer(rcSetWindowColorBuffer_server_proc_t f) { rcSetWindowColorBuffer_server_proc_t retval = rcSetWindowColorBuffer; rcSetWindowColorBuffer = f; return retval;}
	virtual rcFlushWindowColorBuffer_server_proc_t set_rcFlushWindowColorBuffer(rcFlushWindowColorBuffer_server_proc_t f) { rcFlushWindowColorBuffer_server_proc_t retval = rcFlushWindowColorBuffer; rcFlushWindowColorBuffer = f; return retval;}
	virtual rcMakeCurrent_server_proc_t set_rcMakeCurrent(rcMakeCurrent_server_proc_t f) { rcMakeCurrent_server_proc_t retval = rcMakeCurrent; rcMakeCurrent = f; return retval;}
	virtual rcFBPost_server_proc_t set_rcFBPost(rcFBPost_server_proc_t f) { rcFBPost_server_proc_t retval = rcFBPost; rcFBPost = f; return retval;}
	virtual rcFBSetSwapInterval_server_proc_t set_rcFBSetSwapInterval(rcFBSetSwapInterval_server_proc_t f) { rcFBSetSwapInterval_server_proc_t retval = rcFBSetSwapInterval; rcFBSetSwapInterval = f; return retval;}
	virtual rcBindTexture_server_proc_t set_rcBindTexture(rcBindTexture_server_proc_t f) { rcBindTexture_server_proc_t retval = rcBindTexture; rcBindTexture = f; return retval;}
	virtual rcBindRenderbuffer_server_proc_t set_rcBindRenderbuffer(rcBindRenderbuffer_server_proc_t f) { rcBindRenderbuffer_server_proc_t retval = rcBindRenderbuffer; rcBindRenderbuffer = f; return retval;}
	virtual rcColorBufferCacheFlush_server_proc_t set_rcColorBufferCacheFlush(rcColorBufferCacheFlush_server_proc_t f) { rcColorBufferCacheFlush_server_proc_t retval = rcColorBufferCacheFlush; rcColorBufferCacheFlush = f; return retval;}
	virtual rcReadColorBuffer_server_proc_t set_rcReadColorBuffer(rcReadColorBuffer_server_proc_t f) { rcReadColorBuffer_server_proc_t retval = rcReadColorBuffer; rcReadColorBuffer = f; return retval;}
	virtual rcUpdateColorBuffer_server_proc_t set_rcUpdateColorBuffer(rcUpdateColorBuffer_server_proc_t f) { rcUpdateColorBuffer_server_proc_t retval = rcUpdateColorBuffer; rcUpdateColorBuffer = f; return retval;}
	virtual rcOpenColorBuffer2_server_proc_t set_rcOpenColorBuffer2(rcOpenColorBuffer2_server_proc_t f) { rcOpenColorBuffer2_server_proc_t retval = rcOpenColorBuffer2; rcOpenColorBuffer2 = f; return retval;}
	virtual rcCreateClientImage_server_proc_t set_rcCreateClientImage(rcCreateClientImage_server_proc_t f) { rcCreateClientImage_server_proc_t retval = rcCreateClientImage; rcCreateClientImage = f; return retval;}
	virtual rcDestroyClientImage_server_proc_t set_rcDestroyClientImage(rcDestroyClientImage_server_proc_t f) { rcDestroyClientImage_server_proc_t retval = rcDestroyClientImage; rcDestroyClientImage = f; return retval;}
	virtual rcSelectChecksumHelper_server_proc_t set_rcSelectChecksumHelper(rcSelectChecksumHelper_server_proc_t f) { rcSelectChecksumHelper_server_proc_t retval = rcSelectChecksumHelper; rcSelectChecksumHelper = f; return retval;}
	virtual rcCreateSyncKHR_server_proc_t set_rcCreateSyncKHR(rcCreateSyncKHR_server_proc_t f) { rcCreateSyncKHR_server_proc_t retval = rcCreateSyncKHR; rcCreateSyncKHR = f; return retval;}
	virtual rcClientWaitSyncKHR_server_proc_t set_rcClientWaitSyncKHR(rcClientWaitSyncKHR_server_proc_t f) { rcClientWaitSyncKHR_server_proc_t retval = rcClientWaitSyncKHR; rcClientWaitSyncKHR = f; return retval;}
	virtual rcFlushWindowColorBufferAsync_server_proc_t set_rcFlushWindowColorBufferAsync(rcFlushWindowColorBufferAsync_server_proc_t f) { rcFlushWindowColorBufferAsync_server_proc_t retval = rcFlushWindowColorBufferAsync; rcFlushWindowColorBufferAsync = f; return retval;}
	virtual rcDestroySyncKHR_server_proc_t set_rcDestroySyncKHR(rcDestroySyncKHR_server_proc_t f) { rcDestroySyncKHR_server_proc_t retval = rcDestroySyncKHR; rcDestroySyncKHR = f; return retval;}
	virtual rcSetPuid_server_proc_t set_rcSetPuid(rcSetPuid_server_proc_t f) { rcSetPuid_server_proc_t retval = rcSetPuid; rcSetPuid = f; return retval;}
	virtual rcUpdateColorBufferDMA_server_proc_t set_rcUpdateColorBufferDMA(rcUpdateColorBufferDMA_server_proc_t f) { rcUpdateColorBufferDMA_server_proc_t retval = rcUpdateColorBufferDMA; rcUpdateColorBufferDMA = f; return retval;}
	virtual rcCreateColorBufferDMA_server_proc_t set_rcCreateColorBufferDMA(rcCreateColorBufferDMA_server_proc_t f) { rcCreateColorBufferDMA_server_proc_t retval = rcCreateColorBufferDMA; rcCreateColorBufferDMA = f; return retval;}
	 virtual ~renderControl_server_context_t() {}
	int initDispatchByName( void *(*getProc)(const char *name, void *userData), void *userData);
};

#endif
