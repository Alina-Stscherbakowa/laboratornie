// ������������ 1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

class Time
{
private:
	int hour;
	int min;
	int sec;
public:
	Time() : hour(0), min(0), sec(0) {}
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
int main()
{
	system("chcp 1251");

	Time t;

	t.settime(16, 18, 3);
	t.showtime();
	t.showtime2();
	t.showDay();
	t.showDay2();
	t.showDay3();
	t.showDay4();

	system("pause");
	return 0;
}
