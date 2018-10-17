#include <stdio.h>
#include <unistd.h>

#include "../CCHVAPI_Ethernet/CCHVAPI.h"
#include "../CCHVAPI_Ethernet/Types.h"
#include <opencv2/highgui/highgui.hpp>
#include <pthread.h>
#include <map>

int g_camsize=6;
int show_channel=0;
bool b_save_file=0;
byte* imgBuf = NULL;
void  RawCallBack(void* lpParam, void* lpUser)
{

	GigEimgFrame *thisFrame = (GigEimgFrame*)lpParam;
	if (thisFrame == NULL)
		return;
	int dispheight = thisFrame->m_height / g_camsize;
	//ÍŒÏñµÄžß¶ÈÎªm_height£¬ÒòŽËµ¥žöÍŒÏñµÄžß¶ÈŸÍÊÇm_height/g_camsize
	int dispwidth = thisFrame->m_width;
	//ÊýŸÝ¿éµÄ¿í¶ÈÓëÍŒÏñ¿í¶ÈÏàµÈ¡£
	if (imgBuf == NULL)
	{
		imgBuf = new byte[dispheight*dispwidth];
	}

	int offset = 0;
	if (show_channel <= g_camsize - 1)//Ñ¡ÔñÏÔÊŸÄÄÒ»žöÏà»úµÄÍŒÏñ¡£
	{
		offset = show_channel;
	}
	else
	{
		offset = g_camsize - 1;
	}
	offset = dispheight*dispwidth*offset;
	memcpy(imgBuf, thisFrame->imgBuf + offset, dispheight*dispwidth);//ŽÓÊýŸÝ¿éÖÐÖ»¿œ±ŽÐèÒªÏÔÊŸµÄÍŒÏñ	byte *coords=new byte[dispheight];
	cv::Mat frame(dispheight, dispwidth, CV_8UC1, imgBuf);
	cv::imshow("disp", frame);
	cv::waitKey(1);


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
}

typedef std::map<std::string, CCHCamera*> map_camera;
map_camera *cameralist;
void searchcamera()
{
    GigEsearchCamera(cameralist);   
    map_camera ::iterator itr;
	for(itr=cameralist->begin();itr!=cameralist->end();++itr)
	{
		std::string temp=itr->first;
		std::cout<<temp<<std::endl;
		
	}
}
void connect()
{

}
int main()
{
    char input=0;
    while(input!='z')
    {
        input=getchar();
        switch(input)
        {
            case 'a':
            searchcamera();
            break;
            case 'b':
            connect();
            break;
            default:
            break;
        }
        
    }
}