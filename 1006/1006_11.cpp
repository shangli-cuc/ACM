// 1006_11.cpp : �������̨Ӧ�ó������ڵ㡣
//����һ����N���»��, ������M�������Ҵ�������, �����������һ���ж����ֿ���.

#include<iostream>
using namespace std;

long long  Cnm(int n, int m)//Cnm=n!/(m!*(n-m)!)
{
	int i;
	long long sum=1;
	for (i = n; i > m; i--)
		sum *= i;
	for (i = n - m; i > 1; i--)
		sum /= i;
	return sum;
}


int main()
{
	int C;
	cin >> C;
	int i;
	long long num[21];
	num[0] = num[1] = 0;
	num[2] = 1;
	for (i = 3; i < 21; i++)
		num[i] = (i - 1)*(num[i - 2] + num[i - 1]);
	while (C != EOF && C--)
	{
		int n, m;
		cin >> n >> m;
		if (m <= 1 || m > n || n > 20)
			break;
		cout << Cnm(n, m)*num[m] << endl;
		//for (i = 0; i < n; i++)
			//cout << num[i] << endl;
	}
	//system("pause");
    return 0;
}

