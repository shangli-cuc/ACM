// 0913_6.cpp : �������̨Ӧ�ó������ڵ㡣
//���еĵ�һ��Ϊn���Ժ����Ϊǰһ���ƽ�����������е�ǰm��ĺ͡� 

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



