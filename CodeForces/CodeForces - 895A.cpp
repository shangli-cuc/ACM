// CodeForces - 895A.cpp : 定义控制台应用程序的入口点。
// 题目的意思是给你一个序列找出一个区间是的它的和与剩下的所有数的和差值最小，求最小差值

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int x[361] = { 0 }, sum = 0;
	int i, j, ans = 10e9;
	for (i = 1; i <= n; i++)
		cin >> x[i];
	for (i = 1; i <= n; i++)
	{
		sum = 0;
		for (j = i; j <= n; j++)
		{
			sum += x[j];
			ans = min(ans, abs(360 - 2 * sum));
		}
	}
	cout << ans << endl;
	system("pause");
    return 0;
}

