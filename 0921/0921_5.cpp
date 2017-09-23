// 0921_5.cpp : 定义控制台应用程序的入口点。
//蟠桃记
//第一天悟空吃掉桃子总数一半多一个，第二天又将剩下的桃子吃掉一半多一个，以后每天吃掉前一天剩下的一半多一个，
//到第n天准备吃的时候只剩下一个桃子。聪明的你，请帮悟空算一下，他第一天开始吃的时候桃子一共有多少个呢？


#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n <= 1 || n >= 30)
			break;
		int sum = 1;
		int i;
		for (i = 1; i <n; i++)
		{
			sum = (sum + 1) * 2;
		}
		cout << sum << endl;
	}
    return 0;
}

