// Circular Sequence.cpp : 定义控制台应用程序的入口点。
//

//G题：UVA 1584 Circular Sequence 
//题目意思：给定一个循环DNA序列的任一线性表示（循环序列没办法存储，所以可以从任意位置断开来线性存储表示），
//让我们求这个循环DNA序列的最小字典序表示
//解题思路：找到这个循环DNA序列按照顺时针方向从所有位置断开产生的线性序列，比较这些线性序列的字典序，
//找到最小字典序输出

#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int func(string s,int i,int place)
{
	int len = s.length();
	for (int j = 0; j < len; j++)
	{
		if (s[(i + j) % len] < s[(place + j ) % len])
			return 1;
		else if(s[(i + j) % len] > s[(place + j) % len])
			return 0;
	}
	return 1;
}
int main()
{
	int T;
	cin >> T;
	cin.ignore();
	while (T--)
	{
		string s;
		int i;
		cin >> s;
		int len = s.length();
		int place = 0;
		for (i = 1; i < len; i++)
		{
			if (func(s, i,place))
				place = i;
		}
		for (i = 0; i < len; i++)
		{
			cout << s[(place + i) % len];
		}
		cout << endl;
	}
    return 0;
}

