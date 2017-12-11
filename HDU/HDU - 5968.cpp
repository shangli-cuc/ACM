// HDU - 5968.cpp : 定义控制台应用程序的入口点。
//题意：从一个序列里，找出一个连续的子序列，要求子序列的异或和与给定数字的差的绝对值最小，绝对值相等时，选择序列长度较长的，最后输出序列长度
/*
本题的关键部分是求区间的异或和
而区间异或和可以类似的像求区间和一样利用前缀异或和来快速求出
注意到序列中的数字范围是1到1024，所以区间异或和的结果最多只为2047
枚举所有区间，利用前缀异或和求得区间异或和
再利用save[i]记录下来异或和结果为i的区间的最长区间长度
这样对于每一次询问，只需要扫一遍save数组即可得到答案
*/

#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T-- && T!=EOF)
	{
		int n, m, a[105] = { 0 }, x[105] = { 0 }, sum[105] = { 0 }, save[2050] = { 0 };
		int i, j;

		cin >> n;
		for (i = 1; i <= n; i++)cin >> a[i];
		cin >> m;
		for (i = 1; i <= m; i++)cin >> x[i];
		for (i = 1; i <= n; i++)
			sum[i] = sum[i - 1] ^ a[i];//前缀异或和，每个值表示到i为止的序列的异或和
		for (i = 1; i <= n; i++)
		{
			for (j = i; j <= n; j++)
			{
				int num = sum[j] ^ sum[i - 1];//用前缀的异或和来计算序列的异或和，表示从i到j序列的异或和
				if (j - i + 1 > save[num])//如果某几个序列的异或和num相等，选择序列长度较长的
					save[num] = j - i + 1;//现在save数组的值表示异或和为num的序列长度
			}
		}
		//开始询问
		for (i = 1;i <= m; i++)
		{
			int MIN = 10e9, result;
			for (j = 0; j <= 2049; j++)
			{
				if (save[j]>0)
				{
					if (abs(j - x[i]) < MIN)
					{
						MIN = abs(j - x[i]);
						result = save[j];
					}
					else if (abs(j - x[i]) == MIN && save[j]>result)
					{
						result = save[j];
					}
				}
			}
			cout << result << endl;
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}