// 0922_13.cpp : �������̨Ӧ�ó������ڵ㡣
//n���������Լ��
//greatest common divisor
#include<iostream>
using namespace std;

//�����������Լ���ĺ���GCD
int GCD(int x, int y)
{
	int max = x > y ? x : y;
	int min = x < y ? x : y;
	int c = max%min;
	while (c != 0)
	{
		max = min;
		min = c;
		c = max%min;
	}
	return min;
}
int main()
{
	int n;
	cin >> n;
	int s[50];
	int i;
	for (i = 0; i < n; i++)
		cin >> s[i];
	int temp = s[0];
	for (i = 1; i < n; i++)
	{
		temp = GCD(s[i], temp);
	}
	cout << temp << endl;
	system("pause");
    return 0;
}

