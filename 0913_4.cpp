// 0913_4.cpp : 定义控制台应用程序的入口点。
//先输入一个整数，再输入整数个数的数据，输出和

#include <iostream>
using namespace std;

/*
int main()
{
int N,i;
while (cin >> N)
{
if (N == 0)
break;
else
{
for (i = 1; i <= N; i++)
cout << i << ' ';
cout << endl<<N*(1 + N) / 2;
}
}

return 0;
}
*/
int main()
{
	int N, i;
	while (cin >> N)
	{
		if (N == 0)
			break;
		else
		{
			int sum = 0;
			int x;
			for (i = 1; i <= N; i++)
			{
				cin >> x;
				sum = sum + x;
			}
			cout << sum << endl;
			
		}
	}

	return 0;
}

