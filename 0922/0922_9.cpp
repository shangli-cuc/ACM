// 0922_9.cpp : 定义控制台应用程序的入口点。
//查找最大元素
//对于输入的每个字符串，查找其中的最大字母，在该字母后面插入字符串“(max)”。
//对于每个测试实例输出一行字符串，输出的结果是插入字符串“(max)”后的结果，如果存在多个最大的字母，就在每一个最大字母后面都插入"(max)"。

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
		int pos[size];//字符串中最大值所在位置
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
