// 0922_16.cpp : 定义控制台应用程序的入口点。
//进制转换
//输入一个十进制数N，将它转换成R进制数输出。
//输入数据包含多个测试实例，每个测试实例包含两个整数N(32位整数)和R（2<=R<=16, R<>10）。
//为每个测试实例输出转换后的数，每个输出占一行。如果R大于10，则对应的数字规则参考16进制（比如，10用A表示，等等）。

#include<iostream>
using namespace std;


int main()
{
	char a[50];
	char s[17] = "0123456789ABCDEF";
	int N, R;
	while (cin >> N >> R)
	{
		int i = 0;
		if (N == 0)
			cout << '0' << endl;
		else
		{
			if (N < 0)
			{
				cout << "-";
				N *= (-1);
			}
			while (N)
			{
				a[i++] = s[N%R];
				N = N / R;
			}
			while (i--)
			{
				cout << a[i];
			}
			cout << endl;
		}
	}
    return 0;
}

