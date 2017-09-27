// 0927_1.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
using namespace std;


int main()
{
	int s[50][50] = { 0 };
	int i, j;
	int n;
	while (cin >> n)
	{
		for (i = 1; i <= n; i++)
			s[i][1] = 1;
		for (i = 2; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				s[i][j] = s[i - 1][j - 1] + s[i - 1][j];
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				cout << s[i][j];
				if (i != j)
					cout << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}

    return 0;
}

