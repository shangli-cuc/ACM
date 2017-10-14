// 1011_6.cpp : 定义控制台应用程序的入口点。
//Digit Counting
//把前N(1<N<10000)个整数顺次写在一起，例如N=13时，写出12345678910111213，
//数一数0~9各出现多少次？输出10个整数，分别是0、1、2、...、9出现的次数

#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

/*
int main()
{
	int T;
	cin >> T;
	if (T < 1 || T>20)
		return 0;
	while (T--)
	{
		int n;
		cin >> n;
		if (n <= 1 || n >= 10000)
			break;
		stringstream ss;
		int i;
		int a[100];
		int num[10];
		for (i = 0; i < n; i++)
		{
			a[i] = i + 1;
			ss << a[i];//将int型通过stringstream类转换成string类
		}
		string s;
		ss >> s;
		int len = s.length();
		for (i = 0; i < len; i++)
			cout << s[i];
		
		for (i = 0; i < len; i++)
		{
			switch (s[i])
			{
			case 0:
				num[0]++;
				break;
			case 1:
				num[1]++;
				break;
			case 2:
				num[2]++;
				break;
			case 3:
				num[3]++;
				break;
			case 4:
				num[4]++;
				break;
			case 5:
				num[5]++;
				break;
			case 6:
				num[6]++;
				break;
			case 7:
				num[7]++;
				break;
			case 8:
				num[8]++;
				break;
			case 9:
				num[9]++;
				break;
			}
		}
		for (i = 0; i < 10; i++)
			cout << num[i] << ' ';
		cout << endl;
		
	}
	//system("pause");
    return 0;
}
*/


int main()
{
	int T;
	cin >> T;
	if (T < 1 || T>20)
		return 0;
	while (T--)
	{
		int n;
		cin >> n;
		if (n <= 1 || n >= 10000)
			break;
		int i, j;
		int num[10] = { 0 };
		for (i = 1; i <= n; i++)
		{
			j = i;
			while (j)
			{
				num[j % 10]++;
				j = j / 10;
			}
		}
		for (i = 0; i < 10; i++)
		{
			if (i < 9)
				cout << num[i] << ' ';
			else
				cout << num[i];
		}
		cout << endl;
	}
	return 0;
}