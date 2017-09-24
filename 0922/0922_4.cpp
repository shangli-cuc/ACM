// 0922_4.cpp : 定义控制台应用程序的入口点。
//绝对值排序
//输入n(n<=100)个整数，按照绝对值从大到小排序后输出。
//题目保证对于每一个测试实例，所有的数的绝对值都不相等。
//输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理。 
#include <iostream>
using namespace std;

int main()
{
	int n;
	const int size = 100;
	while (cin >> n)
	{
		if (n <= 0 ||n>100)
			break;
		int a[size];
		int i, j;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				int temp;
				if (abs(a[j]) < abs(a[j + 1]))
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		int flag = 0;
		for (i = 0; i < n; i++)
		{
			if (flag)
				cout << ' '<<a[i];
			else
			{
				cout << a[i];
				flag = 1;
			}
		}
		cout << endl;

	}

    return 0;
}

