// 0922_12.cpp : 定义控制台应用程序的入口点。
//求n个数的最小公倍数。
//输入包含多个测试实例，每个测试实例的开始是一个正整数n，然后是n个正整数。
//为每组测试数据输出它们的最小公倍数，每个测试实例的输出占一行。你可以假设最后的输出是一个32位的整数。

#include<iostream>
using namespace std;

//求两个数最小公倍数的函数LCM
int LCM(int x,int y)
{
	int max = x > y ? x : y;
	int min = x < y ? x : y;
	for (int i = min; i < x*y + 1; i++)
	{
		if (i%x == 0 && i%y == 0)
		{
			return i;
			break;
		}
	}
}


int main()
{
	int n;
	while (cin>>n)
	{
		int s[50];
		int i;
		for (i = 0; i < n; i++)
			cin >> s[i];
		int temp = 1;
		for (i = 0; i < n; i++)
		{
			temp = LCM(s[i], temp);
		}
		cout << temp << endl;
	}
    return 0;
}

