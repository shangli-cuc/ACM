// pigs.cpp : 定义控制台应用程序的入口点。
//猪一出生第二天开始就能每天中午生一只小猪，而且生下来的都是母猪。
//对于每头刚出生的小猪，在它生下第二头小猪后立马被杀掉，
//假设在第一天，买了一头刚出生的小猪，请问，在第N天晚上，还存有多少头猪？
//解题思路：当年的猪f[N]为头一年的猪加上他们新生的猪2*f[N - 1]减去杀去的猪, 可供杀的猪为第N - 3年的猪所生下的猪f[N - 3]，
//          因此可供杀去的猪的头数为f[N-3];因此f[N] = 2*f[N-1] – f[N-3]
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0;
	int a[100], b[100];
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	for (i = 4; i < 55; i++)
	{
		a[i] = a[i - 1] * 2 - a[i - 3];
	}
	while (n--)
	{
		int day;
		cin >> day;
		cout << a[day] << endl;
	}
	system("pause");
	return 0;
}


