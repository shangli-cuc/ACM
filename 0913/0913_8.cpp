// 0913_8.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;


int main()
{
	int T;
	cin >> T;
	int flag = 1;
	while (flag<=T)
	{
		int n, m,i;
		int x[40];
		while (cin>>n>>m)
		{
			if (n >= 1 && n <= 40 && m >= 1 && m <= n)
			{
				int temp = 0;
				for (i = 1; i <= n; i++)
					cin >> x[i];
				for (i = 1; i < n; i++)
				{
					if (x[i] <= x[i + 1])
					{
						//temp = x[i];
						//x[i + 1] = temp;
						x[i + 1] = x[i];
					}
				}
				//cout << pow((100 - temp), 2) << endl;
				cout << pow((100 - x[n]), 2) << endl;
			}
		}
		flag++;
	}
    return 0;
}

