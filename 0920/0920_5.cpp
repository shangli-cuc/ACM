// 0920_5.cpp : 定义控制台应用程序的入口点。
//给定一个日期，输出这个日期是该年的第几天。

#include <iostream>
using namespace std;

int LeapYear(int year)
{
	int x = year % 4;
	int y = year % 100;
	int z = year % 400;
	if (x == 0 && y != 0)
		return 1;
	else if (z == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int year, month, day;
	char x;
	while (cin >> year >> x >> month >> x >> day)
	{
		int i,sum = 0;
		int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
		if ((month > 2) && (LeapYear(year)))
			sum++;
		for (i = 0; i < month-1; i++)
		{
			sum = sum + mon[i];
		}
		sum =sum+day;
		cout << sum << endl;
	}
    return 0;
}

