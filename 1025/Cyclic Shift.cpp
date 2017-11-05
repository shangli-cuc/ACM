// Cyclic Shift.cpp : 定义控制台应用程序的入口点。
//codeforces 745A Hongcow Learns the Cyclic Shift  
//题目意思：有一个人在学习新的单词，给定一个单词的字符串，问由这个字符串向右循环移动能够产生多少个新的单词
//解题思路：用字符数组initStr读入字符串，并用二维数组strVec存储该字符串循环移动后不相同的值,将initStr放入strVec中
//          然后对该字符串循环移动字符串长度减1次，每次移动之后都判断移动后的字符串是否在strVec中，
//          如果已经存在说明是重复字符串，不做处理，否则放入strVec中。最后输出strVec的大小

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	char s[55], s_copy[55][55] = {'0'};
	cin >> s;
	int num = 1;
	memcpy(s_copy[num], s, sizeof(s));
	int len = strlen(s);
	int i, j;
	int flag = len-1;
	while(flag--)
	{
		for (i = len - 1; i >= 0; i--)
		{
			s[i + 1] = s[i];
		}
		s[0] = s[len];
		s[len] = '\0';

		for (i = 1; i <= num; i++)
		{
			int k = 0;
			for (j = 0; j < len; j++)
			{
				if (s_copy[i][j] != s[j])
					break;
				else
					k++;
			}
			if (k == len)
				break;
		}
		if (i > num)
		{
			num++;
			memcpy(s_copy[num], s, sizeof(s));
		}
	}
	cout << num << endl;
    return 0;
}

