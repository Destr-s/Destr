#pragma once
class elevator
{
public:
	int waitfloor=0;
	int requestfloor=0;
	int currentfloor=0;
	int time=0;
	void setrequestfloor(int rfloor)
	{
		requestfloor = rfloor;
	}//�����������
	void setwaitfloor(int wfloor)
	{
		waitfloor = wfloor;
	}//���õȴ�����
	void setcurrentfloor(int cfloor)
	{
		currentfloor = cfloor;
	}//����Ŀǰ����
	void settime(int t)
	{
		time = t;
	}//����ʱ��
	int gettime()
	{
		return time;
	}//���ʱ��
	int getrequestfloor()
	{
		return requestfloor;
	}//����������
	int getcurrentfloor()
	{
		return currentfloor;
	}//���Ŀǰ����

	elevator();
	~elevator();
};

