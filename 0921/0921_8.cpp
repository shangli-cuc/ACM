// 0921_8.cpp : 定义控制台应用程序的入口点。
//数据的交换输出
//输入数据有多组，每组占一行，每行的开始是一个整数n，表示这个测试实例的数值的个数，跟着就是n个整数。n=0表示输入的结束，不做处理。

#include <iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	const int size = 100;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int i, pos;
		int a[size], b[size];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for (i = 0; i < n; i++)//找到a中最小值的位置
		{
			if (b[0] == a[i])
				pos = i;
		}
		int temp;
		temp = a[pos];
		a[pos] = a[0];
		a[0] = temp;
		int flag = 0;
		for (i = 0; i < n; i++)
		{
			if (flag)
				cout << ' ' << a[i];
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

