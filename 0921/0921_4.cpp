// 0921_4.cpp : 定义控制台应用程序的入口点。
//对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，
//判定该表达式的值是否都为素数。
#include <iostream>
using namespace std;

int IsPrime(int x)
{
	int i;
	int num = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			num++;
			return 0;//表示不是素数
		}
	}
	if (num == 0)//表示是素数
		return 1;
}


int main()
{
	int x, y;
	while (cin >> x >> y)
	{
		if (x == 0 && y == 0)
			break;
		int n;
		int num = 0;
		for (n = x; n <= y; n++)
		{
			if (IsPrime(pow(n, 2) + n + 41))
				num++;
			else
			{
				cout << "Sorry" << endl;
				break;
			}
		}
		if (num == (y - x + 1))
			cout << "OK" << endl;
	}
    return 0;
}

