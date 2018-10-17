// CCTAPI.cpp : Defines the initialization routines for the DLL.
//

#include "CCHVAPI.h"
#include "Types.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
vector<GigEcamInstance*>vec_camins;
GigEcamInstance searchCamIns;
int GigEaddInstance(void *lpUser, LPMV_CALLBACK2 CallBackFunc, CCHCamera *info)
{
	GigEcamInstance*this_camInstance = new GigEcamInstance(lpUser, CallBackFunc, info);
	int rst = this_camInstance->initEth(info);
	if (rst<0)
	{
		return rst;
	}
	vec_camins.push_back(this_camInstance);

	return vec_camins.size();


}

int GigEstartCap(int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;

	if (vec_camins[camNum]->b_connected)
	{
		return vec_camins[camNum]->start();
	}
	return -1;
}
int GigEsetMirrorType(GigEDataProcessType mirrortype, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	vec_camins[camNum]->setMirrorType(mirrortype);
	return 0;
}
int GigEstopCap(int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	if (camNum >= vec_camins.size())
		return -1;

	return vec_camins[camNum]->stop();
}
int GigEgetFrameCnt(int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	if (vec_camins.size()>0)
	{
		if (vec_camins[camNum]->isRunning())
		{
			return vec_camins[camNum]->getFrameCnt();
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}
int GigEgetDataCnt(int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	if (vec_camins[camNum]->isRunning())
	{
		return vec_camins[camNum]->getDataCnt();
	}
	else
	{
		return -1;
	}
}
long GigEgetErrPackCnt(int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	if (vec_camins[camNum]->isRunning())
	{
		return vec_camins[camNum]->getErrPackCnt();
	}
	else
	{
		return -1;
	}
}
int GigEsendOrder(GigEcamPropStruct camprop, int camNum, int s)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	vec_camins[camNum]->sendOrder(camprop, s);
	return 0;
}

int GigEsendProp(GigEclientPropStruct prop, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	vec_camins[camNum]->sendProp(prop);
	return 0;
}
cq_int32_t GigEsetTrigMode(cq_int32_t s, cq_int32_t camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	vec_camins[camNum]->setTrigMode(s);
	return 0;
}

int GigEcloseConnection(int &camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	vec_camins[camNum]->closeConnection();
	//camNum=-camNum;
	return 0;
}
int GigEsetIP(CCHCamera *devinfo, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->setIP(devinfo);
}
int GigEforceIP(CCHCamera *devinfo)
{
	return searchCamIns.forceIP(devinfo);
}
int GigEsearchCamera(map_camera * camlist)
{
	//may need to restart searchCamIns
	searchCamIns.searchCamera(camlist);
	return camlist->size();
}
uint32_t GigEWriteReg(uint32_t addr, uint32_t data, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->WriteReg(addr, data);
}
uint32_t GigEReadReg(uint32_t addr, uint32_t *data, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->ReadReg(addr, data);
}
int GigEsendSoftTrig(int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->sendSoftTrig();
}
int GigEsetGain(uint32_t value, int isauto, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->setGain(value, isauto);
}
int GigEsetExpo(uint32_t value, int isauto, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->setExpo(value, isauto);
}
int GigEsetFreq(uint32_t value, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->setFreq(value);
}
int GigEsetWB(uint32_t rvalue, uint32_t gvalue, uint32_t g2value, uint32_t bvalue, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->setWB(rvalue, gvalue, g2value, bvalue);
}
int GigEsetCamSize(int camsize, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->setCamSize(camsize);
}
int GigEsetROI(int xstart, int xend, int ystart, int yend, int enable, int camNum)
{
	try
	{
		if (camNum<1)return camNum;
		camNum = camNum - 1;
		return vec_camins[camNum]->setROI(xstart, xend, ystart, yend, enable);
	}
	catch (const std::exception& exception)
	{
		return -1;
	}
}
int GigEsetSkip(int enable, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->setSkip(enable);
}
int GigEsetBinning(int enable, int camNum)
{
	if (camNum<1)return camNum;
	camNum = camNum - 1;
	return vec_camins[camNum]->setBinning(enable);
}

