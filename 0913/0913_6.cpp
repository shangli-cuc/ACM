// 0913_6.cpp : 定义控制台应用程序的入口点。
//数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。 

#include<cstdio>
#include <iostream>
#include<iomanip>
using namespace std;


int main()
{
	int  m, i;
	double n;
	while (cin >> n >> m)
	{
		if (n >= 10000 || m >= 1000)
			break;
		else
		{
			double sum = 0;
			for (i = 1; i <= m; i++)
			{
				sum = sum + n;
				n = sqrt(n);
			}
			printf("%.2f\n", sum);
			//cout << setprecision(2)<<sum << endl;
		}
	}
	return 0;
}



