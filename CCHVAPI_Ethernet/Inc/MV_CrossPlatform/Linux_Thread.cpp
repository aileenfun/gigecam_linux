#include "Linux_Thread.h"
#include "MV_CrossPlatformDefine.h"

void LINUX_InitMutex(MV_Mutex * mutex)
{
    pthread_mutex_init(mutex,NULL);
}
void LINUX_EnterMutex(MV_Mutex* mutex)
{
    pthread_mutex_lock(mutex);
}
void  LINUX_LeaveMutex(MV_Mutex * mutex)
{
    pthread_mutex_unlock(mutex);
}
void  LINUX_DeleteMutex(MV_Mutex * mutex)
{

}
void*   LINUX_CreateThread(MV_THREAD_ATTR* attr ,Thread_CallBack callbackFunc , void* pUser)
{
    pthread_t *tidp=new pthread_t;
    pthread_create( tidp, NULL, callbackFunc, pUser);
    return tidp;
    
}
int  LINUX_WaitForThreadEnd(void* pThread)
{
    pthread_t *tid=(pthread_t*)pThread;
    pthread_join(*tid,NULL);
}


int     LINUX_EndThread()
{
    //pthread_cancel();
}
int     LINUX_DestroyThread(void* pThread)
{
    pthread_t *tid=(pthread_t*)pThread;
    pthread_cancel(*tid);
}
