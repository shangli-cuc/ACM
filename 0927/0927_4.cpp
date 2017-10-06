// 0927_4.cpp : �������̨Ӧ�ó������ڵ㡣
//��ŵ�����ݹ����
//��A�������ƶ���C

#include<iostream>
using namespace std;


void hanoi(int n,char from, char to ,char other)
{
	if (n == 1)
		cout << from << "->" << to << endl;//A����һ�����ӣ�ֱ���ƶ���C��
	else
	{
		hanoi(n - 1, from, other, to);//��n-1�����Ӵ�A�ƶ����м��B��
		hanoi(1, from, to, other);//�����1�����Ӵ�A�ƶ���C��
		hanoi(n - 1, other, to, from);//��n-1�����Ӵ�B�ƶ���C��
	}
}

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		char from, to, other;
		from = 'A';
		to = 'C';
		other = 'B';
		hanoi(n, from, to, other);
	}
    return 0;
}

