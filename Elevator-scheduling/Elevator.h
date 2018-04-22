#pragma once
class Elevator
{
public:
	int time;
	int requesttime;
	int waitfloor;
	int requestfloor;
	int currentfloor;
	Elevator();
	~Elevator();


	int gotofloor(int requesttime,int requestfloor,int time,int waitfloor,int currentfloor);
	int stop(int time,int currentfloor);
	
};

