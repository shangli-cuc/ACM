// 0921_3.cpp : �������̨Ӧ�ó������ڵ㡣
//����ʽ���
//����ʽ���������£�
//1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 - 1 / 6 + ...
//������������ö���ʽ��ǰn��ĺ͡�

#include <iostream>
#include<cstdio>
using namespace std;

double function(int x)
{
	double sum=0;
	for (int i = 1; i <= x; i++)
	{
		sum = sum + pow(-1, i + 1)*(1.0 / i);
	}
	return sum;
}
int main()
{
	int m;
	const int size = 100;
	while (cin >> m)
	{
		int i;
		int a[size];
		if (m >= 100)
			break;
		for (i = 0; i < m; i++)
		{
			cin >> a[i]; 
			if (a[i] >= 1000)
				break;
		}
		double sum[size];
		for (i = 0; i < m; i++)
			sum[i] = 0;
		for (i = 0; i < m; i++)
		{
			sum[i] = function(a[i]);
			printf("%.2f\n", sum[i]);
		}
	}
    return 0;
}

