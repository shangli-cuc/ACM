// 1006_8.cpp : �������̨Ӧ�ó������ڵ㡣
//�ַ���
//��"E" "O" "F"�����ַ���ɵ��ַ���������ֻ������һ�ֻ������ַ��������Բ����������ַ���
//ͬʱ��ֹ�ڴ��г���O���ڵ����
//�����з���Ҫ����ַ�������
#include<iostream>
using namespace std;


int main()
{
	int n;
	while (cin >> n && n != EOF)
	{
		if (n <= 0 || n >= 40)
			break;
		int i;
		long long  num[40] = { 0,3,8 };
		for (i = 3; i <= n; i++)
		{
			num[i] = 2 * (num[i - 1] + num[i - 2]);
		}
		cout << num[n] << endl;
	}
    return 0;
}

