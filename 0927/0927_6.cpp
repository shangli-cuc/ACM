// 0927_6.cpp : 定义控制台应用程序的入口点。
//亲和数
//220的所有真约数(即不是自身的约数)之和为：
//1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110＝284。
//而284的所有真约数为1、2、4、71、 142，加起来恰好为220。
//输入数据第一行包含一个数M，接下有M行，每行一个实例,包含两个整数A,B； 其中 0 <= A,B <= 600000 
//对于每个测试实例，如果A和B是亲和数的话输出YES，否则输出NO。

#include<iostream>
#include<algorithm>
using namespace std;

int isDivisor(int x)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 1; i < x; i++)
	{
		if (x%i == 0)
			sum1 += i;
	}
	for (i = 1; i < sum1; i++)
	{
		if (sum1%i == 0)
			sum2 += i;
	}
	if (sum2 == x)
		return 1;
	else
		return 0;
}



int main()
{
	int m;
	cin >> m;
	while (m--)
	{
		int a, b;
		cin >> a >> b;
		if (a < 0 || b>600000)
			break;
		if (isDivisor(a) && isDivisor(b))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

