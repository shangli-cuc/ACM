// 0921_7.cpp : �������̨Ӧ�ó������ڵ㡣
//��һ������Ϊn(n<=100)�����У������ж���Ϊ��2��ʼ�ĵ�������ż����
//����Ҫ���㰴��˳��ÿm�������һ��ƽ��ֵ����������m��������ʵ��������ƽ��ֵ��
//��������ƽ��ֵ���С�

#include <iostream>
using namespace std;


int main()
{
	/*
	int n, m;
	const int size = 100;
	while (cin >> n >> m)
	{
		if (n > 100 || m <= 0)
			break;
		int i, num=2;
		int a[size];
		//int average[size];
		for (i = 0; i < n; i++)//��������ż���и�ֵ
		{
			a[i] = num;
			num += 2;
		}
		num = 0;
		int j = 0;
		int flag = 0;
		for (i = flag; i < m + flag; i++)
		{
			int sum = 0;
			sum += a[i];
			num++;
			if (num == m)
			{
				//average[j] = sum / m;
				//j++;
				//num = 0;
				//flag = j*m;
				cout << sum / m << ' ';
				j++;
				flag = j*m;
				num = 0;
			}
		}
		cout << endl;
	}
	*/

	int n, m;
	const int size = 100;
	while (cin >> n >> m)
	{
		if (n > 100 || m <= 0)
			break;
		int a[size];
		int i,j;
		int num = 2;
		for (i = 0; i < n; i++)
		{
			a[i] = num;
			num += 2;
		}
		num = 0;
		int sum = 0;
		int flag = 0;
		if (n%m == 0)
		{
			int pos=0;//���ƿո��ʽ
			for (i = 0; i < (n / m); i++)
			{
				sum = 0;
				flag = i*m;
				for (j = flag; j < m+flag; j++)
				{
					sum += a[j];
					num++;
					if (num == m)
					{
						if (pos)
							cout << ' ' << (sum / m);
						else
							cout << (sum / m);
						pos = 1;
						num = 0;
						break;
					}
				}
			}
			cout << endl;
		}
		else
		{
			int except = (n%m);
			for (i = 0; i < (n / m)+1; i++)
			{
				sum = 0;
				flag = i*m;
				while (i == (n/m))//����ƽ�������ֲ���mʱ
				{
					for (j = flag; j < n; j++)
						sum += a[j];
					cout << sum / except << endl;
					break;
				}
				if (i == (n / m))
					break;
				for (j = flag; j < m + flag; j++)
				{
					sum += a[j];
					num++;
					if (num == m)
					{
						cout << (sum / m) << ' ';
						num = 0;
						break;
					}
				}
			}
		}
	}
    return 0;
}

