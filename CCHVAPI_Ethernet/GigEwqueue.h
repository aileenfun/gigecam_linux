#ifndef _old
#pragma once

#include <list>
#include "GigEMutex.h"
#include <unistd.h>
using namespace std;
template <typename T>class GigEwqueue
{
private:
	list<T>   m_queue;
	GigeC_Mutex     m_Mutex;
	bool stop;
	int maxlimit;// 0 for no limit
	pthread_cond_t noempty;
	pthread_cond_t nofull;
	pthread_mutex_t qlock;

	struct timespec timeToWait;

public:
	inline GigEwqueue(void);
	inline ~GigEwqueue(void);
public:
	inline void add(T item);
	inline void insert_front(T item);//for get data use only
	inline T remove();
	inline int size();
	inline void reset();
	inline int setlimit(int l);
	inline void clear();
	void gtime();

};

template<typename T> 
inline GigEwqueue<T>::GigEwqueue()
 {
	// pthread_cond_init(&noempty);
	 //pthread_cond_init(&nofull);
	 noempty=PTHREAD_COND_INITIALIZER;
	 nofull=PTHREAD_COND_INITIALIZER;
	 pthread_mutex_init(&qlock,NULL);
	 maxlimit=0;
	 stop=false;
 }

 template<typename T> 
 GigEwqueue<T>::~GigEwqueue()
 {
	pthread_mutex_lock(&qlock);
	stop=true;
	pthread_mutex_unlock(&qlock);
	usleep(1000);
	pthread_cond_broadcast(&nofull);
	pthread_cond_broadcast(&noempty);
 }
template<typename T> 
 void GigEwqueue<T>::gtime()
 {
	struct timeval now;
    clock_gettime(CLOCK_REALTIME,&timeToWait);
	int timeInMs=1;
	timeToWait.tv_nsec +=1000000*timeInMs;
 }
template<typename T> 
 void GigEwqueue<T>::add(T item)
{
	pthread_mutex_lock (&qlock);
	if(maxlimit!=0&&m_queue.size()>maxlimit&&stop==false)
	{
		
		gtime();//must run to refresh timeTowait
		pthread_cond_timedwait(&nofull,&qlock,&timeToWait);
	}

	m_queue.push_back(item);
	pthread_mutex_unlock(&qlock);
	pthread_cond_broadcast(&noempty);
}

template<class T> T GigEwqueue<T>::remove()
{
	int wait_cnt=0;
	//CGuard guardsize(sizelock);
	pthread_mutex_lock(&qlock);
	while(m_queue.size()==0)
	{
		if(stop||wait_cnt>6)
		{
			pthread_mutex_unlock(&qlock);
			return NULL;
		}
		wait_cnt++;
		usleep(1);
gtime();
pthread_cond_timedwait(&noempty,&qlock,&timeToWait);
		//SleepConditionVariableCS(&noempty,&qlock,1);
	}
	//delete guardsize;
	//CGuard guard(m_Mutex);
	T item=m_queue.front();
	m_queue.pop_front();
	pthread_mutex_unlock(&qlock);
	pthread_cond_broadcast(&nofull);
	//WakeConditionVariable(&nofull);
	return item;
}
template<class T>
void  GigEwqueue<T>::clear()
{
	pthread_mutex_lock(&qlock);
	for(int i=0;i<m_queue.size();i++)
	{
		T item=m_queue.front();
		m_queue.pop_front();
		delete item;
	}
	pthread_mutex_unlock(&qlock);
}
template<class T>
void  GigEwqueue<T>::reset()
{

	pthread_mutex_lock(&qlock);
	stop=true;
	pthread_mutex_unlock(&qlock);
	usleep(1000);
	pthread_cond_broadcast(&nofull);
	pthread_cond_broadcast(&noempty);
//	WakeAllConditionVariable(&nofull);
	//WakeAllConditionVariable(&noempty);
	for(int i=0;i<m_queue.size();i++)
	{
		T item=m_queue.front();
		m_queue.pop_front();
		delete item;
	}
}
template <typename T>
inline int GigEwqueue<T>::size()
{
	CGuard guard(m_Mutex);
	int tempsize=m_queue.size();
	return tempsize;
}
template<typename T> 
 void GigEwqueue<T>::insert_front(T item)
{
	CGuard guard(m_Mutex);
	m_queue.push_front(item);
 }
 template<typename T> 
 int GigEwqueue<T>::setlimit(int l)
 {
	 maxlimit=l;
	 return maxlimit;
 }
#endif

#ifdef _old
#pragma once

#include <list>
#include "Mutex.h"
#include <windows.h>
using namespace std;
template <typename T>class wqueue
{
private:
	list<T>   m_queue;
	C_Mutex     m_Mutex;
	C_Mutex sizelock;
	bool stop;
	int maxlimit;// 0 for no limit
public:
	inline wqueue(void);
	inline ~wqueue(void);
public:
	inline void add(T item);
	inline void insert_front(T item);//for get data use only
	inline T remove();
	inline int size();
	inline void reset();
	inline int setlimit(int l);
};

template<typename T> 
inline wqueue<T>::wqueue()
 {
	 maxlimit=0;
	 stop=false;
 }

 template<typename T> 
 wqueue<T>::~wqueue()
 {
	 stop=true;
 }

template<typename T> 
 void wqueue<T>::add(T item)
{
	CGuard guard(m_Mutex);
	if(maxlimit!=0&&m_queue.size()>maxlimit)
	{
		return;
	}

	m_queue.push_back(item);
	
}

template<class T> T wqueue<T>::remove()
{
	int wait_cnt=0;
	CGuard guardsize(sizelock);
	while(m_queue.size()==0)
	{
		if(stop||wait_cnt>10)
			return NULL;
		wait_cnt++;
		Sleep(1);
	}
	//delete guardsize;
	CGuard guard(m_Mutex);
	T item=m_queue.front();
	m_queue.pop_front();
	return item;
}
template<class T>
void  wqueue<T>::reset()
{
	CGuard guard(m_Mutex);
	CGuard guardsize(sizelock);
	stop=true;
	Sleep(1000);
	for(int i=0;i<m_queue.size();i++)
	{
		T item=m_queue.front();
		m_queue.pop_front();
		delete item;
	}
}
template <typename T>
inline int wqueue<T>::size()
{
	CGuard guard(m_Mutex);
	int tempsize=m_queue.size();
	std::conditional_variable d1;
	return tempsize;
}
template<typename T> 
 void wqueue<T>::insert_front(T item)
{
	CGuard guard(m_Mutex);
	m_queue.push_front(item);
 }
 template<typename T> 
 int wqueue<T>::setlimit(int l)
 {
	 maxlimit=l;
	 return maxlimit;
 }

#endif