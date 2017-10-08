// 1006_4.cpp : 定义控制台应用程序的入口点。
//
//一只小蜜蜂(斐波那契数列)
//有一只经过训练的蜜蜂只能爬向右侧相邻的蜂房，不能反向爬行。请编程计算蜜蜂从蜂房a爬到蜂房b的可能路线数。
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
		{
			int temp;
			temp = b;
			b = a;
			a = temp;
		}
		if (a <= 0 || b >= 50||a==b)
			break;
		long long fibonacci[50];
		fibonacci[1] = 1; fibonacci[2] = 2;
		for (int i = 3; i < 50; i++)
			fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		cout << fibonacci[b - a] << endl;
	}
    return 0;
}

