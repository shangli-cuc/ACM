// 0920_1.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;


int main()
{
	char a[3];
	int b[3];
	while (true)
	{
		int i, j;
		int temp;
		for (i = 0; i < 3; i++)
		{
			cin >> a[i];
		}
		for (i = 0; i < 3; i++)
		{
			b[i] = (int)a[i];
		}
		for (i = 0; i < 3-1; i++)
		{
			for (j = 0; j < 3-1 - i; j++)
			{
				if (b[i] > b[i + 1])
				{
					temp = b[i];
					b[i] = b[i + 1];
					b[i + 1] = temp;
				}
			}
		}
		for (i = 0; i < 3; i++)
		{
			a[i] = (char)b[i];
		}
		int flag = 0;
		for (i = 0; i < 3; i++)
		{
			if (flag)
			{
				cout << ' ' << a[i];
			}
			else
			{
				cout << a[i];
				flag = 1;
			}
		}
		cout << endl;
	}
    return 0;
}

