// 0922_12.cpp : �������̨Ӧ�ó������ڵ㡣
//��n��������С��������
//��������������ʵ����ÿ������ʵ���Ŀ�ʼ��һ��������n��Ȼ����n����������
//Ϊÿ���������������ǵ���С��������ÿ������ʵ�������ռһ�С�����Լ������������һ��32λ��������

#include<iostream>
using namespace std;

//����������С�������ĺ���LCM
int LCM(int x,int y)
{
	int max = x > y ? x : y;
	int min = x < y ? x : y;
	for (int i = min; i < x*y + 1; i++)
	{
		if (i%x == 0 && i%y == 0)
		{
			return i;
			break;
		}
	}
}


int main()
{
	int n;
	while (cin>>n)
	{
		int s[50];
		int i;
		for (i = 0; i < n; i++)
			cin >> s[i];
		int temp = 1;
		for (i = 0; i < n; i++)
		{
			temp = LCM(s[i], temp);
		}
		cout << temp << endl;
	}
    return 0;
}

