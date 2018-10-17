#pragma once
class GigeC_Mutex
{
public:
	inline GigeC_Mutex()
	{
		cq_int32_t ret =pthread_mutex_init(&m_mutexThread, NULL);
	};
	inline ~GigeC_Mutex()
	{

	};
	inline void Lock()
	{
		pthread_mutex_unlock(&m_mutexThread);
	};
	inline void UnLock()
	{
		
	};
private:
	pthread_mutex_t m_mutexThread;
};

class CGuard
{
public:

	inline CGuard(GigeC_Mutex &mutex):m_Mutex(mutex)
	{
		m_Mutex.Lock();
	};
	inline ~CGuard()
	{
		m_Mutex.UnLock();
	};
private:
	GigeC_Mutex &m_Mutex;
};
