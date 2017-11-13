// CodeForces_787B.cpp : 定义控制台应用程序的入口点。
//题意就是给出n个宇宙，m个小组，下面的m行每行第一个给出该小组成员的人数num，
//然后接着给出每个成员来自哪个星球，互为相反数的来自一个星球，其中必有一个是好人一个坏人，
//如果有一个小组可能全是坏人（也就是说如果有一个小组里没有相反数）那么就输出YES，否则就输出NO
//解题思路：只要有一组数据里面不存在同一个星球的忠和叛同时出现，则可能全部是叛徒组成的组，
//          因此需要遍历各组数据，一旦出现叛徒族输出YES。忠和叛同时出现的标志为：
//			同一组数据中存在绝对值相等但符号不一样的数据。

#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int mem[10005];
	int flag;
	while (m--)
	{
		flag = 0;
		int num;
		cin >> num;
		int i, j;
		for (i = 0; i < num; i++)
		{
			cin >> mem[i];
		}
		for (i = 0; i < num; i++)
		{
			for (j = 0; j < num; j++)
			{
				if (mem[i] == -mem[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
			break;
	}
	if (!flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	//system("pause");
    return 0;
}
