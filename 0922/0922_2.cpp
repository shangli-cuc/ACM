// 0922_2.cpp : �������̨Ӧ�ó������ڵ㡣
//��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ��
//����ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��

#include <iostream>
using namespace std;


int main()
{
	int n;
	const int size = 100;
	while (cin >> n)
	{
		if (n <= 0 || n >= 55)
			break;
		int a[100], b[100];
		//��1���ܹ���ĸţ1ͷ����1��2��3�����������ĸţ�ܹ���1ͷ
		a[1] = b[1] = b[2] = b[3] = 1;
		for (int i = 1; i < n; i++)
		{
			a[i + 1] = a[i] + b[i];
			b[i+3] = a[i+1];
		}
		cout << a[n] << endl;
	}
    return 0;
}

