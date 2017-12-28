// HDU-2058.cpp : 定义控制台应用程序的入口点。
//题意：给定两个正整数N和M，N表示从1到N的递增序列，输出所有和为M的子序列，N=M=0作为结束标志
//思路：按一般的思路二重循环肯定会超时，现在想想，项数最长的情况是什么？只能是从1开始的子序列，那么假设从1开始加到某个数满足要求
//按照高中等差数列的知识可以知道，((首项+末项)*项数)/2=m，首项为1，末项=首项+项数-1，有(1+n)*n=2m，这里用n代表项数，可以知道最大的项数
//项数max=sqrt(2m)，首项未知，末项可以用首项来代替，项数为循环量i，如果解出的首项为正整数，表示成立
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

//int main()
//{
//	long long n, m;
//	while (cin >> n >> m && n != 0 && m != 0)
//	{
//		long long i, j;
//		long long num = min(n, m);
//		long long sum;
//		for (i = 1; i <= num; i++)
//		{
//			sum = 0;
//			for (j = i; j <= num; j++)
//			{
//				sum += j;
//				if (sum > m)
//					break;
//				else if (sum == m)
//				{
//					printf("[%ld,%ld]\n", i, j);
//					break;
//				}
//			}
//		}
//		cout << endl;
//	}
//    return 0;
//}
//

int main()
{
	long long n, m;
	while (cin >> n >> m &&n != 0 && m != 0)
	{
		int i;
		for (i = (floor)(sqrt(2 * m)); i >= 1; i--)
		{
			double x = ((1.0 * 2 * m / i) + 1 - i) / 2.0;
			int a = floor(x);
			if (a == x && x <= n && (x + i - 1) <= n)
			{
				printf("[%ld,%ld]\n", a, a + i - 1);
			}
		}
		cout << endl;
	}
	return 0;
}