// 0922_8.cpp : �������̨Ӧ�ó������ڵ㡣
//C���ԺϷ���ʶ��
//����һ���ַ������ж����Ƿ���C�ĺϷ���ʶ����
//����ÿ���������ݣ����һ�С��������������C�ĺϷ���ʶ���������"yes"�����������no����

#include <iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int len;
	while (n--)
	{
		int flag;
		cin.ignore();
		string s;
		getline(cin, s);
		len = s.length();
		int i;
		if (len > 50)
			break;
		if ((s[0] >= 'A'&&s[0] <= 'Z') || (s[0] >= 'a'&&s[0] <= 'z') || (s[0] == '_'))//���ж����ַ�
		{
			for (i = 1; i<len; i++)//�ж������ַ�
			{
				if ((s[i] >= 'A'&&s[i] <= 'Z') || (s[i] >= 'a'&&s[i] <= 'z') || (s[i] == '_')
					|| (s[i] >= '0'&&s[i] <= '9'))
				{
					flag = 1;
				}
				else
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
		else
			cout << "no" << endl;
	}
	system("pause");
    return 0;
}

