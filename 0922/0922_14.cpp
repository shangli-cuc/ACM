// 0922_14.cpp : �������̨Ӧ�ó������ڵ㡣
//�����Ĵ�����һ�������ͷ�����һ�����ַ��������硰level�����ߡ�noon���ȵȾ��ǻ��Ĵ�����дһ�������ж϶�����ַ����Ƿ��ǡ����ġ���
//��������������ʵ�����������ݵĵ�һ����һ��������n,��ʾ����ʵ���ĸ����������������n���ַ�����
//���һ���ַ����ǻ��Ĵ��������"yes",�������"no".

#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		string s;
		getline(cin, s);
		int flag, i;
		int len = s.length();
		if (len % 2 == 0)
		{
			for (i = 0; i < len / 2; i++)
			{
				if (s[i] != s[len - 1 - i])
				{
					flag = 0;
					break;
				}
				else
					flag = 1;
			}
		}
		else
		{
			for (i = 0; i < ((len-1) / 2); i++)
			{
				if (s[i] != s[len - 1 - i])
				{
					flag = 0;
					break;
				}
				else
					flag = 1;
			}
		}
		if (flag)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
    return 0;
}

