// 0922_1.cpp : 定义控制台应用程序的入口点。
//	字符串统计
//对于给定的一个字符串，统计其中数字字符出现的次数。



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

