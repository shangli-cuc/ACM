// 0913_3.cpp : 定义控制台应用程序的入口点。
//输入多组数据求和当全为0时停止

#include <iostream>
using namespace std;


void main()
{
	int i, a, b;
	while(true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		else
			cout << a + b<<endl;
	}
		
}

