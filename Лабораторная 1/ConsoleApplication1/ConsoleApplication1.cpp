// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "vremia.h" 
#include <iostream>

Time::Time()  // �����������
{
	hour = 10;   
	point = new int; 
	*point = 20;      
}

Time::~Time()  // ����������
{
	hour = 0;   

	delete point; 
}

void Time::settime(int h, int m, int s)
{
	hour = h;
	min = m;
	sec = s;
}

void Time::showtime()
{
	std::cout << hour << " ����� " << min << " ����� "
		<< sec << " �������" << std::endl;
}


void Time::showtime2()
{
	if (hour > 12)
		hour -= 12;

	std::cout << hour << " ����(-��) P.M " << min << " ����� "
		<< sec << " �������" << std::endl;
}
void Time::showDay()
{

	std::cout << "C 00:00 �� 05.00 ����" << std::endl;
}
void Time::showDay2()
{

	std::cout << "C 05:00 �� 09.00 ����" << std::endl;
}
void Time::showDay3()
{

	std::cout << "C 09:00 �� 17.00 ����" << std::endl;
}
void Time::showDay4()
{

	std::cout << "C 00:00 �� 05.00 �����" << std::endl;
}