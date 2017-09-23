// 0921_2.cpp : �������̨Ӧ�ó������ڵ㡣
//��ֵͳ��
//ͳ�Ƹ�����n�����У���������������ĸ�����

#include <iostream>
using namespace std;

int statistics(double x)
{
	if (x > 0)
		return 1;
	else if (x < 0)
		return 2;
	else
		return 0;
}

int main()
{
	int N;
	const int size = 100;
	while (cin >> N)
	{
		if (N == 0)
			break;
		int i; 
		int positive = 0, negative = 0, zero = 0;
		double a[size];
		for (i = 0; i < N; i++)
		{
			cin >> a[i];
		}
		for (i = 0; i < N; i++)
		{
			switch (statistics(a[i]))
			{
			case 1:
				positive++;
				break;
			case 2:
				negative++;
				break;
			case 0:
				zero++;
				break;
			}
		}
		cout << negative << ' ' << zero << ' ' <<  positive << endl;
	}
    return 0;
}

