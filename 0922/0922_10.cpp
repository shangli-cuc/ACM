// 0922_10.cpp : 定义控制台应用程序的入口点。
//首字母变大写
//输入一个英文句子，将每个单词的第一个字母改成大写字母。
//ASCII码 A 65 a 97

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

