// HihoCoder - 1631.cpp : 定义控制台应用程序的入口点。
//输入m条鱼，n只猫，x分钟和每只猫吃一条鱼的分钟数
//输出p和q表示，在x分钟后剩余p条完整的鱼和q条不完整的鱼

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int m, n, x;//m条鱼，n只猫，x分钟
	int i, cat[105], eat[105];
	while (cin >> m >> n >> x && m!=EOF )
	{
		memset(eat, 0, sizeof(eat));
		for (i = 1; i <= n; i++)
			cin >> cat[i];
		sort(cat, cat + n+1);
		int count = 0;
		while (x--)
		{
			for (i = 1; i <= n; i++)
			{
				if (eat[i] == 0 && m)
				{
					eat[i] = cat[i];
					m--;
				}
			}
			for (i = 1; i <= n; i++)
			{
				if (eat[i])
					eat[i]--;
			}
		}
		for (i = 1; i <= n; i++)
		{
			if (eat[i])
				count++;
		}
		cout << m << ' ' << count << endl;
	}

	//system("pause");
    return 0;
}

