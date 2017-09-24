// 0922_2.cpp : 定义控制台应用程序的入口点。
//有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。
//请编程实现在第n年的时候，共有多少头母牛？

#include <iostream>
using namespace std;


int main()
{
	int n;
	const int size = 100;
	while (cin >> n)
	{
		if (n <= 0 || n >= 55)
			break;
		int a[100], b[100];
		//第1年总共有母牛1头，第1，2，3年可以生产的母牛总共有1头
		a[1] = b[1] = b[2] = b[3] = 1;
		for (int i = 1; i < n; i++)
		{
			a[i + 1] = a[i] + b[i];
			b[i+3] = a[i+1];
		}
		cout << a[n] << endl;
	}
    return 0;
}

