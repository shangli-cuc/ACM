// 1006_4.cpp : �������̨Ӧ�ó������ڵ㡣
//
//һֻС�۷�(쳲���������)
//��һֻ����ѵ�����۷�ֻ�������Ҳ����ڵķ䷿�����ܷ������С����̼����۷�ӷ䷿a�����䷿b�Ŀ���·������
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
		{
			int temp;
			temp = b;
			b = a;
			a = temp;
		}
		if (a <= 0 || b >= 50||a==b)
			break;
		long long fibonacci[50];
		fibonacci[1] = 1; fibonacci[2] = 2;
		for (int i = 3; i < 50; i++)
			fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		cout << fibonacci[b - a] << endl;
	}
    return 0;
}

