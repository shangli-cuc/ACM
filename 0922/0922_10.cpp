// 0922_10.cpp : �������̨Ӧ�ó������ڵ㡣
//����ĸ���д
//����һ��Ӣ�ľ��ӣ���ÿ�����ʵĵ�һ����ĸ�ĳɴ�д��ĸ��
//ASCII�� A 65 a 97

#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s;
	while (getline(cin, s))
	{
		int i;
		int len = s.length();
		if (len > 100)
			break;
		s[0] -= 32;
		for (i = 1; i <= len; i++)
		{
			if (s[i] == ' ')
				s[i + 1] -= 32;
		}
		cout << s << endl;
	}
    return 0;
}

