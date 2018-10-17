// -*- coding: gb2312-dos -*-

#include "MV_CrossPlatform.h"

#if defined(MV_WINDOWS)
#include "Windows_Thread.h"
#elif defined(MV_LINUX)
#include "Linux_Thread.h"
#endif


// ��ʼ��һ���ٽ���
void    MV_InitMutex(MV_Mutex * mutex)
{
#if defined(MV_WINDOWS)
    WINDOWS_InitMutex(mutex);
#elif defined(MV_LINUX)
    LINUX_InitMutex(mutex);
#endif
}

// �ͷ��ٽ���
void    MV_EnterMutex(MV_Mutex * mutex)
{
#if defined(MV_WINDOWS)
    WINDOWS_EnterMutex(mutex);
#elif defined(MV_LINUX)
    LINUX_EnterMutex(mutex);
#endif
}

// �����ٽ���
void    MV_LeaveMutex(MV_Mutex * mutex)
{
#if defined(MV_WINDOWS)
    WINDOWS_LeaveMutex(mutex);
#elif defined(MV_LINUX)
    LINUX_LeaveMutex(mutex);
#endif
}

// �˳��ٽ���
void    MV_DeleteMutex(MV_Mutex * mutex)
{
#if defined(MV_WINDOWS)
    WINDOWS_DeleteMutex(mutex);
#elif defined(MV_LINUX)
    LINUX_DeleteMutex(mutex);
#endif
}

// �����߳�
void*   MV_CreateThread(MV_THREAD_ATTR* attr ,Thread_CallBack callbackFunc , void* pUser)
{
#if defined(MV_WINDOWS)
    return WINDOWS_CreateThread(attr, callbackFunc, pUser);
#elif defined(MV_LINUX)
    return LINUX_CreateThread(attr, callbackFunc, pUser);
#endif
}

// �ȴ��߳������˳�
int     MV_WaitForThreadEnd(void* pThread)
{
#if defined(MV_WINDOWS)
    return WINDOWS_WaitForThreadEnd(pThread);
#elif defined(MV_LINUX)
    return LINUX_WaitForThreadEnd(pThread);
#endif
}

// �����߳�
int     MV_EndThread()
{
#if defined(MV_WINDOWS)
    return WINDOWS_EndThread();
#elif defined(MV_LINUX)
    return LINUX_EndThread();
#endif
}

// �����߳̾��
int     MV_DestroyThread(void* pThread)
{
#if defined(MV_WINDOWS)
    return WINDOWS_DestroyThread(pThread);
#elif defined(MV_LINUX)
    return LINUX_DestroyThread(pThread);
#endif
}
