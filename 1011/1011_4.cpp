// 1011_4.cpp : �������̨Ӧ�ó������ڵ㡣
//���⳵��������
//��4�ˡ�3�ˡ�2�ˡ�1��һ��������������ͬС�������ͬһ����ͬʱ��ͬС������ͬʱ���ͬһ����
//������賵������С����

#include<iostream>
using namespace std;

/*
int main()
{
	long long n;
	cin >> n;
	if (n < 1 || n>100000)
		return 0;
	int i, j;
	int s[100];
	int num = 0;
	for (i = 0; i < n; i++)
	{
		cin >> s[i];
		if (s[i] > 4 || s[i] < 1)
			return 0;
		if (s[i] == 4)
		{
			num++;
			s[i] = 0;
		}
	}
	int sum;
	for (i = 0; i < n; i++)
	{
		if (s[i])
		{
			sum = 4 - s[i];
			int flag = 1;
			for (j = 0; j < n; j++)
			{
				if (s[j] <= sum && i != j && s[j]!=0)
				{
					if (flag)
					{
						num++;
						flag = 0;
					}
					sum -= s[j];
					s[i] = 0;
					s[j] = 0;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (s[i])
			num++;
	}
	cout << num << endl;
    return 0;
}
*/

/*
int main()
{
		long n;
		cin >> n;
		if (n < 1 || n>100)
			return 0;
		int i;
		int s[100];
		int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
		for (i = 0; i < n; i++)
		{
			cin >> s[i];
			if (s[i] == 4)
				n4++;
			else if (s[i] == 3)
				n3++;
			else if (s[i] == 2)
				n2++;
			else
				n1++;
		}

		int num = n4;//4������Լ���

		if (n3 <= n1)//3�����1����ƴ��
		{
			num += n3;
			n1 = n1 - n3;
			n3 = 0;
		}
		else//(n3 > n1)
		{
			num += n1;
			n3 = n3 - n1;
			n1 = 0;
		}

		if (n3)//������������Լ���
			num += n3;

		if (n2 % 2 == 0)//2����ĺ�2����ƴ��
		{
			num += (n2 / 2);
			n2 = 0;
		}
		else
		{
			num += (n2 / 2);
			n2 = n2 % 2;
		}

		if (n2 && n1 <= 2)//�ж���2�����ʱ���1����ƴ��
		{
			num++;
			n2 = 0;
			n1 = 0;
		}
		else if (n2 && n1 > 2)
		{
			num++;
			n2 = 0;
			n1 -= 2;
		}

		if (n1 % 4 == 0)
		{
			num += (n1 / 4);
			n1 = 0;
		}
		else
		{
			num += (n1 / 4);
			n1 = n1 % 4;
		}
		if (n1)
			num++;
		cout << num << endl;
	//system("pause");
	return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, s;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	for (i = 0; i < n; i++)
	{
		cin >> s;
		switch (s)
		{
		case 4:
			n4++;
			break;
		case 3:
			n3++;
			break;
		case 2:
			n2++;
			break;
		case 1:
			n1++;
			break;
		}
	}
	int num = n4;
	num += n3;
	n1 -= n3;
	num += n2 / 2;
	if (n2 % 2 )
	{
		num++;
		n1 -= 2;
	}
	if (n1 > 0)
		num += (n1 + 3) / 4;
	cout << num << endl;
	//system("pause");
	return 0;
}