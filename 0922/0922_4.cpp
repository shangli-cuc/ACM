// 0922_4.cpp : �������̨Ӧ�ó������ڵ㡣
//����ֵ����
//����n(n<=100)�����������վ���ֵ�Ӵ�С����������
//��Ŀ��֤����ÿһ������ʵ�������е����ľ���ֵ������ȡ�
//���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������Ϊn,������n��������n=0��ʾ�������ݵĽ������������� 
#include <iostream>
using namespace std;

int main()
{
	int n;
	const int size = 100;
	while (cin >> n)
	{
		if (n <= 0 ||n>100)
			break;
		int a[size];
		int i, j;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				int temp;
				if (abs(a[j]) < abs(a[j + 1]))
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		int flag = 0;
		for (i = 0; i < n; i++)
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

