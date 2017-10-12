// 1006_9.cpp : �������̨Ӧ�ó������ڵ㡣
//�齱�����Ź�ʽ��
//n���˴�д��n��������ֽ������齱�����˺�������Ӧ��ʱ���н������н�����
#include<iostream>
using namespace std;

//����������ĵݹ麯��D(n)=(n-1)(D(n-1)+D(n-2)) D(1)=0,D(2)=1;


int main()
{
	int T;
	cin >> T;
	double a[8], b[8];
	a[0] = 0;
	a[1] = 0;
	a[2] = 1;
	int i;
	for (i = 3; i < 8; i++)
		a[i] = (i - 1)*(a[i - 1] + a[i - 2]);
	for (i = 2; i < 8; i++)
	{
		b[i] = 1;
		for (int j=1; j <= i; j++)
			b[i] *= j;
	}
	while (T!=EOF && T--)
	{
		int n;
		cin >> n;
		if (n <= 1 || n > 20)
			break;
		else if (n >= 7)
			n = 7;
		double probability[8];
		for (i = 0; i < 8; i++)
			probability[i] = a[i] / b[i];
		printf("%.2f%%\n", probability[n]*100);
	}
	//system("pause");
    return 0;
}

