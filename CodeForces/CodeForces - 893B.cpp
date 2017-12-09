// CodeForces - 893B.cpp : �������̨Ӧ�ó������ڵ㡣
//����һ������n����n�������������(2^k-1)*(2^(k-1))��ȵ�������һ��

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
	return i;//������λ��
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

