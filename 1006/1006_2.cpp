// 1006_2.cpp : 定义控制台应用程序的入口点。
//收费站
//每过一个收费站，都是拿走当时羊的一半，然后退还一只，等到老汉到达市场，就只剩下3只羊了。
//输入数据第一行是一个整数N，下面由N行组成，每行包含一个整数a(0<a<=30),表示收费站的数量。
//对于每个测试实例，请输出最初的羊的数量,每个测试实例的输出占一行。

#include<iostream>
using namespace std;



int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		int sum = 3;
		for (int i = 0; i < m; i++)
		{
			sum = (sum - 1) * 2;
		}
		cout << sum << endl;
	}
    return 0;
}

