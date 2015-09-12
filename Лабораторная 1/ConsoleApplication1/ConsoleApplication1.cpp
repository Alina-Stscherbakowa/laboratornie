// ConsoleApplication1.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "vremia.h" 
#include <iostream>

Time::Time()  //  онструктор
{
	hour = 10;   
	point = new int; 
	*point = 20;      
}

Time::~Time()  // ƒеструктор
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
	std::cout << hour << " часов " << min << " минут "
		<< sec << " секунды" << std::endl;
}


void Time::showtime2()
{
	if (hour > 12)
		hour -= 12;

	std::cout << hour << " часа(-ов) P.M " << min << " минут "
		<< sec << " секунды" << std::endl;
}
void Time::showDay()
{

	std::cout << "C 00:00 до 05.00 ночь" << std::endl;
}
void Time::showDay2()
{

	std::cout << "C 05:00 до 09.00 утро" << std::endl;
}
void Time::showDay3()
{

	std::cout << "C 09:00 до 17.00 день" << std::endl;
}
void Time::showDay4()
{

	std::cout << "C 00:00 до 05.00 вечер" << std::endl;
}