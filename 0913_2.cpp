// 0913_2.cpp : 定义控制台应用程序的入口点。
//输入指定组数据求和

#include <iostream>
using namespace std;


void main()
{
	int N, i, a, b;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cin >> a >> b;
		cout << a + b<<endl;
	}
}

