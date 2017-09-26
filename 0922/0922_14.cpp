// 0922_14.cpp : 定义控制台应用程序的入口点。
//“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。请写一个程序判断读入的字符串是否是“回文”。
//输入包含多个测试实例，输入数据的第一行是一个正整数n,表示测试实例的个数，后面紧跟着是n个字符串。
//如果一个字符串是回文串，则输出"yes",否则输出"no".

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

