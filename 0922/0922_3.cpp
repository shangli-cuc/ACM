// 0922_3.cpp : 定义控制台应用程序的入口点。
//数值有序
//有n(n<=100)个整数，已经按照从小到大顺序排列好，
//现在另外给一个整数x，请将该数插入到序列中，并使新的序列仍然有序。
//输入数据包含多个测试实例，每组数据由两行组成，
//第一行是n和m，第二行是已经有序的n个数的数列。n和m同时为0标示输入数据的结束，本行不做处理。

#include <iostream>
using namespace std;


int main()
{
	int n, m;
	const int size = 100;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
			break;
		int i, j, pos;
		int a[size];
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n; i++)
		{
			if (a[i] > m)
			{
				pos = i;
				break;
			}
		}
		for (i = n-1; i >=pos; i--)
		{
			int temp;
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
		a[pos] = m;
		int flag = 0;
		for (i = 0; i < n + 1; i++)
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

