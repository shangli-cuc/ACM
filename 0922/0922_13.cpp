// 0922_13.cpp : 定义控制台应用程序的入口点。
//n个数的最大公约数
//greatest common divisor
#include<iostream>
using namespace std;

//求两个数最大公约数的函数GCD
int GCD(int x, int y)
{
	int max = x > y ? x : y;
	int min = x < y ? x : y;
	int c = max%min;
	while (c != 0)
	{
		max = min;
		min = c;
		c = max%min;
	}
	return min;
}
int main()
{
	int n;
	cin >> n;
	int s[50];
	int i;
	for (i = 0; i < n; i++)
		cin >> s[i];
	int temp = s[0];
	for (i = 1; i < n; i++)
	{
		temp = GCD(s[i], temp);
	}
	cout << temp << endl;
	system("pause");
    return 0;
}

