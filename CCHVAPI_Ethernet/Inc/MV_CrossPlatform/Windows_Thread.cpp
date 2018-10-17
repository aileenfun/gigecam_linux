// -*- coding: gb2312-dos -*-

#include "Windows_Thread.h"
#include "MV_CrossPlatformDefine.h"

#ifdef MV_WINDOWS
#include "process.h"
#include "stdafx.h"

// ��ʼ��һ���ٽ���
void    WINDOWS_InitMutex(MV_Mutex* mutex)
{
    InitializeCriticalSection(mutex);
    return;
}

// �ͷ��ٽ���
void    WINDOWS_EnterMutex(MV_Mutex* mutex)
{
    EnterCriticalSection(mutex);
    return ;
}

// �����ٽ���
void    WINDOWS_LeaveMutex(MV_Mutex* mutex)
{
    LeaveCriticalSection(mutex);
    return ;
}

// �˳��ٽ���
void    WINDOWS_DeleteMutex(MV_Mutex* mutex)
{
    DeleteCriticalSection(mutex);
    return ;
}

// �����߳�
// �ɹ����طǿ�ָ�룬ʧ�ܷ��ؿ�ָ��
void*   WINDOWS_CreateThread(MV_THREAD_ATTR* attr,Thread_CallBack callbackFunc, void* pUser)
{
    void*           pThread         = MV_NULL;
    unsigned int    nThreadID       = 0;
    int             threadPriority  = THREAD_PRIORITY_HIGHEST;

    pThread = (void*) _beginthreadex(MV_NULL, 0, callbackFunc, pUser, 0, &nThreadID);
    if (pThread == MV_NULL)
    {
        return MV_NULL;
    }

    if (attr != MV_NULL )
    {
        switch (attr->threadPriority)
        {
            case MV_THREAD_PRIORITY_LOWEST:
                threadPriority = THREAD_PRIORITY_LOWEST;
                break;
            case MV_THREAD_PRIORITY_BELOW_NORMAL:
                threadPriority = THREAD_PRIORITY_BELOW_NORMAL;
                break;
            case MV_THREAD_PRIORITY_NORMAL:
                threadPriority = THREAD_PRIORITY_NORMAL;
                break;
            case MV_THREAD_PRIORITY_ABOVE_NORMAL:
                threadPriority = THREAD_PRIORITY_ABOVE_NORMAL;
                break;
            case MV_THREAD_PRIORITY_HIGHEST:
                threadPriority = THREAD_PRIORITY_HIGHEST;
                break;
            default:
                threadPriority = THREAD_PRIORITY_ERROR_RETURN;
                break;
        }
    }

    if (!SetThreadPriority(pThread, threadPriority))
    {
        return MV_NULL;
    }

    return pThread;
}

// �ȴ��߳������˳�
int     WINDOWS_WaitForThreadEnd(void* pThread)
{
    WaitForSingleObject(pThread,INFINITE);
    return 0;
}

// �����߳�
int     WINDOWS_EndThread()
{
    _endthreadex(0);
    return 0;
}

// �����߳̾��
int     WINDOWS_DestroyThread(void* pThread)
{
    CloseHandle(pThread);
    return 0;
}

#endif
