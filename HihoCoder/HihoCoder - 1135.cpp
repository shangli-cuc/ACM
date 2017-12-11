// HihoCoder - 1135.cpp : 定义控制台应用程序的入口点。
//题意：输入一个字符序列，每个字符表示相应颜色的求被放入箱子，
//当三种颜色的球的个数差的绝对值等于给定数字时，消除当前箱子内的球，求箱子内球的个数最多时有几个？
/*
按题意模拟放置即可，每放入一个球就做一次检测
注意题目求的是盒子中最多拥有过多少个球
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main()
{
	int result[3], i, j;
	for (i = 0; i < 3; i++)//输入x，y，z
		cin >> result[i];
	sort(result, result + 3);//排序
	string s;
	cin >> s;
	int len = s.length(),red = 0, yellow = 0, blue = 0;
	int num[3], count = 0, ans = 0;
	for (i = 0; i < len; i++)
	{
		switch (s[i])
		{
		case 'R':
			red++;
			break;
		case 'Y':
			yellow++;
			break;
		case 'B':
			blue++;
			break;
		}
		bool flag = true;
		count++;
		ans = count > ans ? count : ans;
		num[0] = abs(red - yellow);
		num[1] = abs(red - blue);
		num[2] = abs(yellow - blue);
		sort(num, num + 3);//排序
		for (j = 0; j < 3; j++)
		{
			if (num[j] != result[j])//没有发现匹配，直接跳出检测
			{
				flag = false;
				break;
			}
		}
		if (flag)//相当于三个数都匹配了
		{
			red = 0; yellow = 0; blue = 0; count = 0;
		}
	}
	cout << ans << endl;
	//system("pause");
    return 0;
}

