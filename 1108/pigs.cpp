// pigs.cpp : �������̨Ӧ�ó������ڵ㡣
//��һ�����ڶ��쿪ʼ����ÿ��������һֻС�������������Ķ���ĸ��
//����ÿͷ�ճ�����С���������µڶ�ͷС�������ɱ����
//�����ڵ�һ�죬����һͷ�ճ�����С�����ʣ��ڵ�N�����ϣ������ж���ͷ��

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0;
	int a[100], b[100];
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	for (i = 4; i < 55; i++)
	{
		a[i] = a[i - 1] * 2 - a[i - 3];
	}
	while (n--)
	{
		int day;
		cin >> day;
		cout << a[day] << endl;
	}
	system("pause");
	return 0;
}


