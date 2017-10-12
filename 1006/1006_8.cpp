// 1006_8.cpp : 定义控制台应用程序的入口点。
//字符串
//由"E" "O" "F"三种字符组成的字符串（可以只有其中一种或两种字符，但绝对不能有其他字符）
//同时禁止在串中出现O相邻的情况
//求所有符合要求的字符串数量
#include<iostream>
using namespace std;


int main()
{
	int n;
	while (cin >> n && n != EOF)
	{
		if (n <= 0 || n >= 40)
			break;
		int i;
		long long  num[40] = { 0,3,8 };
		for (i = 3; i <= n; i++)
		{
			num[i] = 2 * (num[i - 1] + num[i - 2]);
		}
		cout << num[n] << endl;
	}
    return 0;
}

