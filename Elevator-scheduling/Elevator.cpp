#include "stdafx.h"
#include "Elevator.h"
#include<iostream>
#include<stdio.h>
using namespace std;
Elevator::Elevator()
{
}


Elevator::~Elevator()
{
}


int Elevator::gotofloor(int requesttime,int requestfloor,int time,int waitfloor,int currentfloor)
{
	int g, h;
	if (time < requesttime)time = requesttime;
	g = waitfloor - currentfloor;
	if (g < 0)g = -g;
	h = waitfloor - requestfloor;
	if (h < 0)h = -h;
	time = time + g + h;
	return time;
}//�����ͳ˿�ǰ��Ŀ�ĵ�

int Elevator::stop(int time,int currentfloor)
{
	time++;
	return time;
}//����ͣ��
