// 1006_3.cpp : 定义控制台应用程序的入口点。
//密码
//从四类字符内识别符合要求的字符串

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
		int len = s.length(), i, num[4] = { 0,0,0,0 };
		if (len < 8 || len>16)
			cout << "NO" << endl;
		else
		{
			for (i = 0; i < len; i++)
			{
				if (s[i] >= 'A'&&s[i] <= 'Z')
					num[0] = 1;
				else if (s[i] >= 'a'&&s[i] <= 'z')
					num[1] = 1;
				else if (s[i] >= '0'&&s[i] <= '9')
					num[2] = 1;
				else if (s[i] == '~' || s[i] == '!' || s[i] == '@' ||
					s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^')
					num[3] = 1;
				else
					break;
			}
			int temp = 0;
			for (i = 0; i < 4; i++)
			{
				if (num[i] == 1)
					temp++;
			}
			if (temp >= 3)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
    return 0;
}

