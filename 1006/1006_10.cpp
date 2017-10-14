// 1006_10.cpp : 定义控制台应用程序的入口点。
//配对问题(匈牙利算法)（看了好久...）
//输入数据的第一行是三个整数K, M, N，分别表示可能的组合数目，女生的人数，男生的人数。0<K <= 1000
//1 <= N 和M <= 500.接下来的K行，每行有两个数，
//分别表示女生Ai愿意和男生Bj做partner。最后一个0结束输入
//输出最大匹配数
//匈牙利算法是寻找增广路径解决二分图匹配，达到完美匹配，即最大匹配，完全匹配
#include<iostream>
using namespace std;

const int max = 501;
int map[max][max];
int vis[max];
int boy[max];
//int i, j;如果把i，j定义成全局变量程序照常运行，但在OJ上WA
int k, m, n;

int find(int girl)
{
	for (int j = 1; j <= n; j++)//依次访问所有的男生
	{
		if (vis[j] == 0 && map[girl][j] == 1)//本次搜索中之前没有访问过该男生，同时女生可以和男生配对
		{
			vis[j] = 1;//表示该男生已经访问过了
			if (boy[j] == 0 || find(boy[j]))//该男生还没有配对或者可以将已经配对成功的男女重新拆开，给女生重新找到男生配对
			{
				boy[j] = girl;//男孩j与女孩i配对成功
				return 1;
			}
		}
	}
	return 0;
}


int main()
{
	while (cin >> k && k!=EOF)
	{
		if (k <= 0 || k > 1000)
			break;
		cin >> m >> n;
		if (m > 500 || n < 1)
			break;
		int a, b;
		memset(map, 0, sizeof(map));
		memset(boy, 0, sizeof(boy));
		for (int i = 0; i < k; i++)
		{
			cin >> a >> b;
			map[a][b] = 1;
		}
		/*
		for (i = 1; i <= m; i++)
		{
			cout << endl;
			for (j = 1; j <= n; j++)
				cout << map[i][j]<<" ";
		}
		*/
		int num = 0;
		for (int i = 1; i <= m; i++)
		{
			memset(vis, 0, sizeof(vis));
			if (find(i))
				num++;
		}
		cout << num << endl;
	}
	//system("pause");
    return 0;
}

