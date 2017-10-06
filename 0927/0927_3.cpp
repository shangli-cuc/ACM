// 0927_3.cpp : 定义控制台应用程序的入口点。
//1/k=1/x+1/y
//x=k*y/(y-k) y<=2*k

#include<iostream>
using namespace std;


int main()
{
	int s[1000][2] = { 0 };
	int k, i, x, y;
	while (cin >> k)
	{
		int num = 0;
		i = 0;
		for (y = k+1; y <= 2 * k; y++)
		{
			x = k*y / (y - k);
			if (k*(x + y) == x*y)
			{
				s[i][0] = x; s[i][1] = y; i++;
				num++;
			}
		}
		cout << num << endl;
		for (i = 0; i < num; i++)
			printf("1/%d = 1/%d + 1/%d\n", k, s[i][0], s[i][1]);
	}
    return 0;
}

