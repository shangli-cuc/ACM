// 0921_8.cpp : �������̨Ӧ�ó������ڵ㡣
//���ݵĽ������
//���������ж��飬ÿ��ռһ�У�ÿ�еĿ�ʼ��һ������n����ʾ�������ʵ������ֵ�ĸ��������ž���n��������n=0��ʾ����Ľ�������������

#include <iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	const int size = 100;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int i, pos;
		int a[size], b[size];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for (i = 0; i < n; i++)//�ҵ�a����Сֵ��λ��
		{
			if (b[0] == a[i])
				pos = i;
		}
		int temp;
		temp = a[pos];
		a[pos] = a[0];
		a[0] = temp;
		int flag = 0;
		for (i = 0; i < n; i++)
		{
			if (flag)
				cout << ' ' << a[i];
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

