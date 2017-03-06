#ifdef VIA_OPENCV
#ifndef USRGAMECONTROLLER_H
#define USRGAMECONTROLLER_H

#include "qtcyberdip.h"

#define WIN_NAME "Frame"

//���ص��ṹ��
struct MouseArgs{
	cv::Rect box;
	bool Drawing, Hit;
	// init
	MouseArgs() :Drawing(false), Hit(false)
	{
		box = cv::Rect(0, 0, -1, -1);
	}
};
//���ص�����
void  mouseCallback(int event, int x, int y, int flags, void*param);

class usrGameController
{
private:
	qtCyberDip* cyberDip;
	unsigned int imgCount;

	MouseArgs argM;
public:
	//���캯�������б����ĳ�ʼ����Ӧ�ڴ����
	usrGameController(qtCyberDip* qtCD);
	//�������������ձ���������Դ
	~usrGameController();
	//����ͼ������ÿ���յ�ͼ��ʱ�������
	int usrProcessImage(cv::Mat& img);
};

#endif
#endif