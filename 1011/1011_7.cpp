// 1011_7.cpp : 定义控制台应用程序的入口点。
//Master-Mind Hints
//给定答案序列(均为1到9的整数)和用户猜的序列，统计有多少数字猜对且位置正确（A：强匹配），
//有多少数字在两个序列都出现过但位置不对（B：弱匹配）。
//输入包含多组测试数据，每组测试数据输入第一行为序列长度N，第二行是答案序列，
//接下来是若干行猜字序列，猜字序列全0是表示该组数据结束，N为0时输入结束

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	int j = 1;
	while (cin >> n &&n != 0&&n!=EOF)
	{
		int s[1005], a[1005];//答案序列，猜测序列
		for (int i = 1; i <= n; i++)
			cin >> s[i];
		cout << "Game " << j << ":" << endl;
		while (true)
		{
			for (int i = 1; i <= n; i++)
				cin >> a[i];
			if (a[1] == 0)
				break;
			int num_A = 0;
			int A[10] = { 0 }, B[10] = { 0 };
			for (int i = 1; i <= n; i++)
			{
				if (s[i] == a[i])
					num_A++;//存放强匹配的个数
			}
			int num_B = 0;
			for (int i = 1; i <= n; i++)
			{
				A[s[i]]++;//存放答案序列中1~9出现的个数
				B[a[i]]++;//存放猜测序列中1~9出现的个数
			}
			for (int i = 1; i <= 9; i++)
			{
				if (A[i] >= B[i])
					num_B += B[i];
				else
					num_B += A[i];
			}
			num_B -= num_A;
			cout << "	(" << num_A << "," << num_B << ")" << endl;
		}
		j++;
	}
    return 0;
}

