// 0922_1.cpp : �������̨Ӧ�ó������ڵ㡣
//	�ַ���ͳ��
//���ڸ�����һ���ַ�����ͳ�����������ַ����ֵĴ�����



#include <iostream>
#include<string>
#include<cstdio>
using namespace std;


int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int num = 0;
		string s; 
		cin >> s;
		int len = s.length();
		for (int i = 0; i < len; i++)
		{
			if (s[i] >= '0'&&s[i] <= '9')
				num++;
		}
		cout << num << endl;
	}
    return 0;
}

