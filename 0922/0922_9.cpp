// 0922_9.cpp : �������̨Ӧ�ó������ڵ㡣
//�������Ԫ��
//���������ÿ���ַ������������е������ĸ���ڸ���ĸ��������ַ�����(max)����
//����ÿ������ʵ�����һ���ַ���������Ľ���ǲ����ַ�����(max)����Ľ����������ڶ��������ĸ������ÿһ�������ĸ���涼����"(max)"��

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
	/*
	const int size = 100;
	const string s = "(max)";
	string a;
	while (getline(cin, a))
	{
		int len = a.length();
		string b = a;
		sort(b.begin(),b.end());
		int i;
		int pos[size];//�ַ��������ֵ����λ��
		for (i = 0; i < len; i++)
		{
			if (b.back() == a[i])
			{
				pos[i] = 1;
			}
		}
		for (i = 0; i < len; i++)
		{
			if (pos[i])
				a.insert(i + 1, s);
		}
		cout << a << endl;
	}
	*/
	char a[100];
	while (cin >> a)
	{
		int len = strlen(a);
		if (len > 100)
			break;
		int flag[100];
		int i;
		int max=0;
		for (i = 0; i < len; i++)
		{
			if (a[i]>max)
				max = a[i];
		}
		for (i = 0; i < len; i++)
		{
			if (a[i] == max)
				flag[i] = 1;
			else
				flag[i] = 0;
		}
		for(i = 0; i < len; i++)
		{
			cout << a[i];
			if (flag[i])
				cout << "(max)";
		}
		cout << endl;
	}
    return 0;
}
