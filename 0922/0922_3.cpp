// 0922_3.cpp : �������̨Ӧ�ó������ڵ㡣
//��ֵ����
//��n(n<=100)���������Ѿ����մ�С����˳�����кã�
//���������һ������x���뽫�������뵽�����У���ʹ�µ�������Ȼ����
//�������ݰ����������ʵ����ÿ��������������ɣ�
//��һ����n��m���ڶ������Ѿ������n���������С�n��mͬʱΪ0��ʾ�������ݵĽ��������в�������

#include <iostream>
using namespace std;


int main()
{
	int n, m;
	const int size = 100;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
			break;
		int i, j, pos;
		int a[size];
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n; i++)
		{
			if (a[i] > m)
			{
				pos = i;
				break;
			}
		}
		for (i = n-1; i >=pos; i--)
		{
			int temp;
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
		a[pos] = m;
		int flag = 0;
		for (i = 0; i < n + 1; i++)
		{
			if (flag)
				cout << ' '<<a[i];
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

