// HDU-2062.cpp : 定义控制台应用程序的入口点。
/*
题意：考虑一个集合 An = { 1, 2, ..., n}。比如，A1={1}，A3={1,2,3}。
我们称一个非空子集元素的排列为一个子集序列。对所有的子序列按字典顺序排序。
任务是给出第m个子序列。需要注意的是：在按字典序生成时{1,2}和{2,1}被认为是两个不同的集合
一般元素个数为n，真子集（不包含空集）个数为2^n-1，字典序的集合数是不符合这一规律的

思路：列出n=3时候的所有情况，发现从子集顺序上可以发现它们能够分成3组，每组的子集个数相等，
每一组都有一个开头数字，将每组的开头数字去掉之后，每组的子集个数正好是n=2所有子集的总数，
设f(n)是n个数字按照字典序所产生的所有子集个数，f(n) = n*( f(n-1) + 1 )，f(1)=1
设c(n)是每一组子集的个数，c(n)=f(n)/n
这是一个缩小规模的问题
*/

#include<iostream>
using namespace std;

int main()
{
	int n, i, t;//n个数字，t表示所求的第m个子集位于哪组子集中
	long long m;//第m个子集
	long long count[21] = { 0 };//不同n时，每组子集的个数
	count[1] = 1;
	int s[21];
	for (i = 2; i <= 20; i++)
	{
		count[i] = (i - 1)*count[i - 1] + 1;//公式推导出来的
	}
	while (cin >> n >> m && n != EOF && m != EOF)
	{
		for (i = 1; i <= 20; i++)
		{
			s[i] = i;//存放每组子集的首元素
		}
		while (n > 0 && m > 0)
		{
			t = m / count[n] + (m%count[n] > 0 ? 1 : 0);
			cout << s[t];
			for (i = t; i <= n; i++)
			{
				s[i] = s[i + 1];
			}
			m -= ((t - 1)*count[n] + 1);
			if (m != 0)
			{
				cout << ' ';
			}
			else
			{
				cout << endl;
			}
			n--;
		}
	}
	//system("pause");
    return 0;
}

