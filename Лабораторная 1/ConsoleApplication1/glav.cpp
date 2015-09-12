#include "stdafx.h"
#include "vremia.h" 
#include <iostream>
using namespace std;
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
