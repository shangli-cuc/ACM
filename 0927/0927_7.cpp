// 0927_7.cpp : 定义控制台应用程序的入口点。
//超级楼梯(斐波那契数列)
//有一楼梯共M级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第M级，共有多少种走法？
//输入数据首先包含一个整数N，表示测试实例的个数，然后是N行数据，每行包含一个整数M（1<=M<=40）,表示楼梯的级数。
//对于每个测试实例，请输出不同走法的数量
//有M层楼梯，最后一层不走，则按照前M-1层走一步，最后两层不走，则按照前M-2层走一步
#include<iostream>
using namespace std;

int Fibonacci(int n)//求斐波那契数列第n项
{
	int s[100] = { 1 };
	int i;
	for (i = 0; i <= n; i++)
	{
		s[i] = 1;
	}
	for (i = 3; i <= n; i++)
	{
		s[i] = s[i - 1] + s[i - 2];
	}
	return s[n];
}


int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		if (m < 1 || m>40)
			break;
		cout << Fibonacci(m) << endl;
	}
    return 0;
}

