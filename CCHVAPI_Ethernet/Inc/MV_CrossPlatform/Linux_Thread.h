#ifndef _MV_LINUX_THREAD_H__
#define _MV_LINUX_THREAD_H__
#include "MV_CrossPlatform.h"
#include "MV_CrossPlatformDefine.h"
#ifdef MV_LINUX


void LINUX_InitMutex(MV_Mutex * mutex);
void LINUX_EnterMutex(MV_Mutex * mutex);
void    LINUX_LeaveMutex(MV_Mutex * mutex);
void    LINUX_DeleteMutex(MV_Mutex * mutex);



void*   LINUX_CreateThread(MV_THREAD_ATTR* attr ,Thread_CallBack callbackFunc , void* pUser);


int     LINUX_WaitForThreadEnd(void* pThread);

int     LINUX_EndThread();

int     LINUX_DestroyThread(void* pThread);


#endif
#endif