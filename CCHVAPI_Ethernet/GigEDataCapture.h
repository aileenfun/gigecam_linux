#pragma once

#include <fstream>
#include <iostream>
#include "GigEDataProcess.h"
#include "GigEclientProp.h"
#include "GigEcamProp.h"
#include "Types.h"
#include <sys/socket.h>
#include <sys/types.h> 
#include <netinet/in.h>

#define PACKSIZE 8192
#define PAYLOADSIZE 8176
class GigECDataCapture
{
public:
	GigECDataCapture(GigEwqueue<GigEimgFrame*>&queue, GigECDataProcess *dp);
	virtual ~GigECDataCapture(void);
	GigEwqueue<GigEimgFrame*>&m_queue;
	GigEwqueue<GigEudp_buffer*>udp_queue;

public:
	int Open(int height, int width);//
	int Close();
	int Input(const void* lpData, cq_int32_t dwSize);
	int startThread();
	int initUDP(int *socket);
	int closeUDP();
	unsigned long getFrameCnt();
	unsigned long getDataCnt();
	int sendProp(GigEclientPropStruct prop);
	int sendOrder(GigEcamPropStruct camprop, int s = 0);
	int sendSoftTrig(int s = 0);
	unsigned long dataCnt;
	long haveerror;
	bool f_errorpack;
	unsigned int frameCnt;
	long getData(byte * buffer, long startpos, long len, long packsize = 1024);
	int getProp(GigEclientPropStruct* prop);
	cq_uint32_t WriteReg(cq_uint32_t addr, cq_uint32_t data);
private:

	GigECDataProcess *m_pDataProcess;
	int			m_iCount;		
	int			m_iRowIndex;	
	bool        m_bFindDbFive;	
	byte*		m_pInData;		
	byte*	m_pOutData;	
	GigEImageMetaStruct *imageMeta;
	char* m_pReadBuff;
	long lRet;
	pthread_t m_hGetUdpThread;
	void getUdpDataThreadFunc();
 	static void* getUdpDataThreadAdapter(void* __this);
	pthread_t m_hPack2FrameThread;
	void pack2FrameThreadFunc();
 	static void* pack2FrameThreadAdapter(void* __this);
	
	volatile cq_bool_t m_bCapture;
	int g_width_L;
	int g_width;
	int g_height;
	//UDP stufffs
	//SOCKET  s;
	int socketSrv;
	struct sockaddr_in addrClient;
	struct sockaddr_in addrSrv;
	int         len;
	GigEimgFrame* thisImgFrame;
	struct sockaddr_in client_addr1;
	std::ofstream savefile;
	std::ofstream savefile2;
	std::ofstream savefile3;
	GigEclientProp *this_clientProp;
	GigEcamProp *this_camprop;
	int softtrigmode;
	unsigned int TOTALPACK;
	unsigned int residue;
};
