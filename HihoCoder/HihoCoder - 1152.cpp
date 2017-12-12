 //HihoCoder - 1152.cpp : 定义控制台应用程序的入口点。
//题目大意：给定一个只包含小写字母的字符串S。对于S的任意一个非空子串，若其包含的不同字母个数为fibonacci数列中的数，
//则我们认为这个子串为幸运的。请找出S的所有幸运的子串。不要重复输出。需要重点注意的是输出的时候要按照字典序输出！！！

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> vec;
int fibonacci[7] = { 1,2,3,5,8,13,21 };
int isLucky(string sub)
{
	int alpha[26] = { 0 };
	int len = sub.length();
	int i, j, count = 0;
	for (i = 0; i < len; i++)
		alpha[sub[i] - 'a'] ++;
	for (i = 0; i < 26; i++)
		if (alpha[i] > 0)
			count++;
	bool flag = false;
	for (i = 0; i < 7; i++)
		if (count == fibonacci[i])
			flag = true;
	len = vec.size();
	for (i = 0; i<len; i++)
	{
		if (sub == vec[i])
			flag = false;
	}
	return flag;
}
int main()
{
	string s;
	cin >> s;
	int i, j, k, len = s.length();
	for (i = 0; i < len; i++)
	{
		k = 1;
		for (j = i; j < len; j++)
		{
			string sub = s.substr(i, k);
			k++;
			if (isLucky(sub))
			{
				vec.push_back(sub);
			}
		}
	}
	sort(vec.begin(), vec.end());
	len = vec.size();
	for (i = 0; i < len; i++)
	{
		cout << vec[i] << endl;
	}
	//system("pause");
	return 0;
}
