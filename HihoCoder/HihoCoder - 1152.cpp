 //HihoCoder - 1152.cpp : �������̨Ӧ�ó������ڵ㡣
//��Ŀ���⣺����һ��ֻ����Сд��ĸ���ַ���S������S������һ���ǿ��Ӵ�����������Ĳ�ͬ��ĸ����Ϊfibonacci�����е�����
//��������Ϊ����Ӵ�Ϊ���˵ġ����ҳ�S���������˵��Ӵ�����Ҫ�ظ��������Ҫ�ص�ע����������ʱ��Ҫ�����ֵ������������

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
