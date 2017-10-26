// New Year Transportation.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
using namespace std;


int main()
{
	int n, t;
	cin >> n >> t;
	int destination[100][1];//传送的目的地
	int i;
	for (i = 1; i < n; i++)
	{
		cin >> destination[i][0];//第i条传送带传送的地方
		destination[i][0] += i;
	}
	i = 1;
	while (true)
	{
		if (destination[i][0] == t)
		{
			cout << "YES" << endl;
			break;
		}
		i = destination[i][0];
		if (i >= n)
		{
			cout << "NO" << endl;
			break;
		}
	}
	system("pause");
    return 0;
}

