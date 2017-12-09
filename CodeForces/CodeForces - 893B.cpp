// CodeForces - 893B.cpp : 定义控制台应用程序的入口点。
//给定一个整数n，求n所有因子里面和(2^k-1)*(2^(k-1))相等的最大的那一个

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int BinaryBits(int x)
{
	int i = 0;
	while (x)
	{
		x = x / 2;
		i++;
	}
	return i;//二进制位数
}
int main()
{
	int n;
	cin >> n;
	int i;
	int sum;
	for (i = n; i >= 1; i--)
	{
		if (n%i != 0)
			continue;
		else
		{
			int k = BinaryBits(n) / 2 + 1;
			while(k)
			{
				sum = (pow(2.0,(int) k) - 1)*(pow(2.0,(int) k - 1));
				if (i == sum)
				{
					cout << i << endl;
					//system("pause");
					return 0;
				}
				k--;
			}
		}
	}
    return 0;
}

