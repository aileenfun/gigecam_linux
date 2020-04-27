#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include "../CCHVAPI_Ethernet/CCHVAPI.h"
#include "../CCHVAPI_Ethernet/Types.h"
#include <opencv2/highgui/highgui.hpp>
#include <pthread.h>
#include <map>

#define clear() printf("\033[H\033[J")
int g_camsize=6;
int show_channel=0;
bool b_save_file=0;
byte* imgBuf = NULL;
byte* imgBuf2 = NULL;
void  RawCallBack(void* lpParam, void* lpUser)
{
	GigEimgFrame *thisFrame = (GigEimgFrame*)lpParam;
	if (thisFrame == NULL)
		return;
	int dispheight = thisFrame->m_height;
	int dispwidth=thisFrame->m_width;
	int w1,h1,w2,h2;
	int fullw=1280;
	int fullh=1024;
	if(dispheight==360)
	{
		w1=960;
		h1=320;
		w2=360;
		h2=320;
	}
	else
	{
		w1=1280;
		h1=1024;
		w2=1280;
		h2=1024;
	}

	if (imgBuf == NULL)
	{
		imgBuf = new byte[fullw*fullh];
	}
	if(imgBuf2=NULL)
	{
		imgBuf2=new byte[fullw*fullh];
	}
	memcpy(imgBuf, thisFrame->imgBuf, w1*h1);
	memcpy(imgBuf2, thisFrame->imgBuf+w1*h1, w2*h2);

	cv::Mat frame(h1, w1, CV_8UC1, imgBuf);
	cv::Mat frame2(h2, w2, CV_8UC1, imgBuf2);
	cv::imshow("disp", frame);
	cv::imshow("disp", frame2);
	cv::waitKey(1);
}
/*
void  RawCallBack(void* lpParam, void* lpUser)
{

	GigEimgFrame *thisFrame = (GigEimgFrame*)lpParam;
	if (thisFrame == NULL)
		return;
	int dispheight = thisFrame->m_height / g_camsize;
	printf("Trigsource:%d\n",thisFrame->TrigSource);
	int dispwidth = thisFrame->m_width;

	if (imgBuf == NULL)
	{
		imgBuf = new byte[dispheight*dispwidth];
	}

	int offset = 0;
	if (show_channel <= g_camsize - 1)
	{
		offset = show_channel;
	}
	else
	{
		offset = g_camsize - 1;
	}
	offset = dispheight*dispwidth*offset;
	memcpy(imgBuf, thisFrame->imgBuf + offset, dispheight*dispwidth);
	cv::Mat frame(dispheight, dispwidth, CV_8UC1, imgBuf);
	cv::imshow("disp", frame);
	cv::waitKey(1);
*/

/*
	if (b_save_file)
	{
		CString strName;
		CString camFolder;

		for (int cameranumber = 0; cameranumber<g_camsize; cameranumber++)
		{
			camFolder.Format(L"c:\\c6UDP\\cam%d", cameranumber);
			if (CreateDirectory(camFolder, NULL) || ERROR_ALREADY_EXISTS == GetLastError())
			{
				int iFileIndex = 1;
				do
				{
					strName.Format(L"c:\\c6UDP\\cam%d\\V_%d.bmp", cameranumber, thisFrame->timestamp);
					++iFileIndex;
				} while (_waccess(strName, 0) == 0);
				CT2CA pszConvertedAnsiString(strName);
				std::string cvfilename(pszConvertedAnsiString);
				offset = cameranumber*dispheight*dispwidth;
				memcpy(imgBuf, thisFrame->imgBuf + offset, dispheight*dispwidth);
				cv::Mat framesave(dispheight, dispwidth, CV_8UC1, imgBuf);
				cv::imwrite(cvfilename, framesave);

			}
		}
		if (snap == true)
		{
			//cv::imwrite("snap.jpg",frame);
			snap = false;
		}
		if (f_softtirg)
		{
			recvSoftCnt++;
		}
		//h_vw.write(frame);

    }
    */
//}

typedef std::map<std::string, CCHCamera*> map_camera;
map_camera cameralist;
CCHCamera *selectedcam;
int searchcamera()
{
	int cameracnt=0;
	//map_camera *cameralist=new map_camera();
    GigEsearchCamera(&cameralist);   
    map_camera ::iterator itr;
	
	for(itr=cameralist.begin();itr!=cameralist.end();++itr)
	{
		std::string temp=itr->first;
		std::cout<<"camera list:"<<std::endl;
		std::cout<<"["<<cameracnt+1<<"]:SN"<<temp<<std::endl;
		cameracnt++;
	}
	return cameracnt;
}
int board1=0;
int connect(int idx)
{
	int cameracnt=0;
	 map_camera ::iterator itr;
	//cout<<"connect which one?"<<endl;
	for(itr=cameralist.begin();itr!=cameralist.end();++itr)
	{
		std::string temp=itr->first;
		std::cout<<"camera list:"<<std::endl;
		std::cout<<"["<<cameracnt<<"]:SN"<<temp<<std::endl;
		if (cameracnt==idx)
		{
			//find by idx
			break;
		}
		cameracnt++;
	}
	selectedcam =itr->second;
	board1 = GigEaddInstance(NULL, RawCallBack, selectedcam);
	if(board1>0)
	{
		cout<<"device connected"<<endl;
	}
	else
	{
		cout<<"connect error"<<endl;
	}
}
void startcapture(int c)
{
	if(GigEstartCap(1024,1280,c)<1)
	{
		cout<<"start cap error"<<endl;
	}
	cout<<"capturing..."<<endl;
}
int iFrameCntPerSec=0;
int iByteCntPerSec=0;
int iFrameCntPerSec_last=0;
int iByteCntPerSec_last=0;
void timerFunction(int sig)
{
	iFrameCntPerSec=GigEgetFrameCnt(board1)-iFrameCntPerSec_last;
	iByteCntPerSec=GigEgetDataCnt(board1)-iByteCntPerSec_last;
	iFrameCntPerSec_last=GigEgetFrameCnt(board1);
	iByteCntPerSec_last=GigEgetDataCnt(board1);
	printf("cam0: %ld Fps     %0.4f MBs\n", iFrameCntPerSec, float(iByteCntPerSec)/1024.0/1024.0);
	alarm(1);
}

void settrigmode(int mode)
{
	if(GigEsetTrigMode(mode,board1)<0)
	{
		cout<<"set trig mode error"<<endl;
	}
}
void setfpgafreq(int f)
{
	GigEsetFreq(f,board1);
}
void forceip(std::string ip)
{
	MV_CC_DEVICE_INFO* devinfo=selectedcam->CamInfo;
	devinfo->stGigEInfo.nCurrentIp=inet_addr(ip.c_str());
	GigEforceIP(selectedcam);
}
void setip(std::string ip)
{
	MV_CC_DEVICE_INFO* devinfo=selectedcam->CamInfo;
	devinfo->stGigEInfo.nCurrentIp=inet_addr(ip.c_str());
	GigEsetIP(selectedcam,board1);
}
int main()
{
	int innum;
int isauto=0;
int xstart,xend,ystart,yend,en;
std::string fip="";
    while(innum!=99)
    {
		printf("\
				0:	show this menu\n\
				1:	search\n\
				2:	connect\n\
				3:	capture\n\
				4:	show channel\n\
				5:	stop capture\n\
				6:	Set trig mode\n\
				7:	Set fpga trig frequency\n\
				8:	Set expo value\n\
				9:	Set gain value\n\
				10:	Soft trig\n\
				11:	Force IP\n\
				12: Set IP\n\
				13:	Set ROI\n\
				\n\
				\'99\':	Exit\n"\
				);

		std::cin>>innum;
		int temp=0;
        switch(innum)
        {
			case 0:
			break;
            
			case 1://search
			//clear();
			if(searchcamera()!=0)
			goto CONNECTCASE;
            break;
            
			case 2://connect
CONNECTCASE:
			cout<<"connect which one? (0 to abort)."<<endl;
			cin>>innum;
			if(innum>0)
            connect(innum-1);
            break;

			case 3://startcap
			startcapture(board1);
			signal(SIGALRM, timerFunction);
			alarm(1);
			break;
			
			case 4:
			cout<<"disp which channel? 0-5"<<endl;
			cin>>innum;
			show_channel=innum;
			break;
			
			case 5:
			cout<<"stop capture"<<endl;
			GigEstopCap(board1);
			alarm(0);
			break;
			
			case 6:
			cout<<"1:Auto,2:FPGA,3:Soft,4:OutSignal,make a choise..."<<endl;
			cin>>innum;
			if(innum>0)
			settrigmode(innum-1);
			break;
			
			case 7:
			cout<<"Input FPGA trig freq:0-60..."<<endl;
			cin>>innum;
			setfpgafreq(innum);
			break;
			
			case 8:
			cout<<"Auto expo?"<<endl;
			cin>>isauto;
			if(isauto==0)
			{
				cout<<"set value?"<<endl;
				cin>>innum;
			}
			GigEsetExpo(innum,isauto,board1);
			break;
			
			case 9:
			cout<<"Auto Gain?"<<endl;
			cin>>isauto;
			if(isauto==0)
			{
				cout<<"set value?"<<endl;
				cin>>innum;
			}
			GigEsetGain(innum,isauto,board1);
			break;

			case 10:
			cout<<"softTrig once"<<endl;
			GigEsendSoftTrig(board1);
			break;

			case 11:
			cout<<"force ip"<<endl;
			
			cin>>fip;
			cout<<"force this ip: "<<fip<<endl;
			forceip(fip);
			break;
			
			case 12:
			cout<<"set ip"<<endl;
			
			cin>>fip;
			cout<<"force this ip: "<<fip<<endl;
			setip(fip);
			break;

			case 13:			
			cout<<"Open ROI? 0 for no, 1 for yes"<<endl;
			cin>>en;
			if(en)
			{
				cout<<"xstart(0), xend(1279), ystart(0), yend(1023)...."<<endl;
				cin>>xstart>>xend>>ystart>>yend;
			}
			GigEsetROI(xstart,xend,ystart,yend,en,board1);
			break;
			
			case 14:			
			cout<<"Open ROI? 0 for no, 1 for yes"<<endl;
			cin>>en;
			GigEsetROI(0,1279,0,1023,en,board1);
			break;

			case 99:
			return 1;
			break;

			default:
			cout<<"error input!"<<endl;
            break;
			


        }
        
    }
}