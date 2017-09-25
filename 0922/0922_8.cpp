// 0922_8.cpp : 定义控制台应用程序的入口点。
//C语言合法标识符
//输入一个字符串，判断其是否是C的合法标识符。
//对于每组输入数据，输出一行。如果输入数据是C的合法标识符，则输出"yes"，否则，输出“no”。

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
		if ((s[0] >= 'A'&&s[0] <= 'Z') || (s[0] >= 'a'&&s[0] <= 'z') || (s[0] == '_'))//先判断首字符
		{
			for (i = 1; i<len; i++)//判断其余字符
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

