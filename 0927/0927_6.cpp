// 0927_6.cpp : �������̨Ӧ�ó������ڵ㡣
//�׺���
//220��������Լ��(�����������Լ��)֮��Ϊ��
//1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110��284��
//��284��������Լ��Ϊ1��2��4��71�� 142��������ǡ��Ϊ220��
//�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ��,������������A,B�� ���� 0 <= A,B <= 600000 
//����ÿ������ʵ�������A��B���׺����Ļ����YES���������NO��

#include<iostream>
#include<algorithm>
using namespace std;

int isDivisor(int x)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 1; i < x; i++)
	{
		if (x%i == 0)
			sum1 += i;
	}
	for (i = 1; i < sum1; i++)
	{
		if (sum1%i == 0)
			sum2 += i;
	}
	if (sum2 == x)
		return 1;
	else
		return 0;
}



int main()
{
	int m;
	cin >> m;
	while (m--)
	{
		int a, b;
		cin >> a >> b;
		if (a < 0 || b>600000)
			break;
		if (isDivisor(a) && isDivisor(b))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

