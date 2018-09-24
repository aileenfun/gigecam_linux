#pragma once
//#include "DataCapture.h"
#include "Types.h"
struct GigEclientPropStruct
{
	int camCnt;
	cq_uint32_t pcIP;
	cq_uint32_t camIP;
	int packetSize;
	int interval_time;
	unsigned long long MACaddr;
	int width;
	int height;
};
class GigEclientProp
{
public:
	GigEclientProp(void);
	~GigEclientProp(void);
	int initBuffer();
	int getCamCnt();
	int setCamCnt(int camCnt);
	int setpcIP(cq_uint32_t IP);
	cq_uint32_t getpcIP();
	int setcamIP(cq_uint32_t IP);
	cq_uint32_t getcamIP();
	int getBuffer(char * destbuffer);
	int setClientProp(GigEclientPropStruct prop);
	int getClientProp(GigEclientPropStruct *prop);
	GigEclientPropStruct memClientProp;
	
private:
	char *sendbuffer;
	
		
	int camCnt;
	cq_uint32_t pcIP;
	cq_uint32_t camIP;
	int packetSize;
	int interval_time;
	unsigned long MACaddr;
};

