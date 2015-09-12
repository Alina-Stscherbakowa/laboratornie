#pragma once
#include <iostream>

class Time
{
private:
	int hour;
	int min;
	int sec;
	int *point;
	
public:
	
	Time();  // Конструктор класса CMyClass
	~Time();   // Деструктор класса CMyClass
	void settime(int h, int m, int s);
	int hour1() { return hour; }
	int min1() { return min; }
	int sec1() { return sec; }
	void showtime();
	void showtime2();
	void showDay();
	void showDay2();
	void showDay3();
	void showDay4();
	
};

