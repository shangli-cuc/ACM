// 1006_1.cpp : 定义控制台应用程序的入口点。
//最大化
//输入数据包含多个测试实例，每个测试实例的第一行只有一个整数n(n <= 100)，
//表示你喜欢看的节目的总数，然后是n行数据，每行包括两个数据Ti_s, Ti_e(1 <= i <= n)，
//分别表示第i个节目的开始和结束时间，为了简化问题，每个时间都用一个正整数表示。
//n = 0表示输入结束，不做处理。
//对于每个测试实例，输出能完整看到的电视节目的个数，每个测试实例的输出占一行。
#include<iostream>
using namespace std;


int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int TimeStart[100], TimeEnd[100];
		int i, j;
		for (i = 0; i < n; i++)
			cin >> TimeStart[i] >> TimeEnd[i];
		for (i = 0; i < n-1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				int temp;
				if (TimeEnd[j] > TimeEnd[j + 1])
				{
					temp = TimeEnd[j];
					TimeEnd[j]=TimeEnd[j+1];
					TimeEnd[j + 1] = temp;

					temp = TimeStart[j];
					TimeStart[j] = TimeStart[j + 1];
					TimeStart[j + 1] = temp;
				}
			}
		}
		/*
		cout << endl;
		for (i = 0; i < n; i++)
			cout << TimeStart[i] << " " << TimeEnd[i] << endl;
		*/
		int num = 1;
		j = 0;
		for (i = 1; i < n; i++)
		{
			if (TimeStart[i]>=TimeEnd[j])
			{
				num++;
				j = i;
			}
		}
		cout << num << endl;
	}
    return 0;
}

