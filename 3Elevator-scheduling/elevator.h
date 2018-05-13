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
	}//设置请求层数
	void setwaitfloor(int wfloor)
	{
		waitfloor = wfloor;
	}//设置等待层数
	void setcurrentfloor(int cfloor)
	{
		currentfloor = cfloor;
	}//设置目前层数
	void settime(int t)
	{
		time = t;
	}//设置时间
	int gettime()
	{
		return time;
	}//获得时间
	int getrequestfloor()
	{
		return requestfloor;
	}//获得请求层数
	int getcurrentfloor()
	{
		return currentfloor;
	}//获得目前层数

	elevator();
	~elevator();
};

