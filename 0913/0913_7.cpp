// 0913_7.cpp : 定义控制台应用程序的入口点。
//求一定范围内的水仙花数，比如：153=1^3+5^3+3^3。

#include <iostream>
using namespace std;


int main()
{
	int m, n,i;
	while (cin >> m >> n)
	{
		int num = 0;
		if (m < 100 || n>999 || m > n)
			break;
		else
		{
			int flag = 0;
			for (i = m; i <= n; i++)
			{
				int a, b, c;
				a = i / 100;
				b = (i - a * 100) / 10;
				c = (i - a * 100 - b * 10);
				if (i == pow(a,3)+pow(b,3)+pow(c,3))
				{
					if (flag)
						cout << " ";
					cout << i ;
					num++;
					flag = 1;
				}
			}
		}
		if (num == 0)
			cout << "no" << endl;
		else
			cout << endl;
	}
    return 0;
}

