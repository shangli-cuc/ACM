// 0921_4.cpp : �������̨Ӧ�ó������ڵ㡣
//���ڱ��ʽn^2+n+41����n�ڣ�x,y����Χ��ȡ����ֵʱ������x,y��(-39<=x<y<=50)��
//�ж��ñ��ʽ��ֵ�Ƿ�Ϊ������
#include <iostream>
using namespace std;

int IsPrime(int x)
{
	int i;
	int num = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			num++;
			return 0;//��ʾ��������
		}
	}
	if (num == 0)//��ʾ������
		return 1;
}


int main()
{
	int x, y;
	while (cin >> x >> y)
	{
		if (x == 0 && y == 0)
			break;
		int n;
		int num = 0;
		for (n = x; n <= y; n++)
		{
			if (IsPrime(pow(n, 2) + n + 41))
				num++;
			else
			{
				cout << "Sorry" << endl;
				break;
			}
		}
		if (num == (y - x + 1))
			cout << "OK" << endl;
	}
    return 0;
}

