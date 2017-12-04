// exercise.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
#include<string>
using namespace std;


//CodeForces - 443A
//题意：统计输入中有多少不同的字母
//int main()
//{
//	string s;
//	getline(cin, s);
//	int len = s.length();
//	int i;
//	int alpha[26] = { 0 };
//	for (i = 1; i < len - 1; i += 3)
//	{
//		alpha[s[i] - 'a']++;
//	}
//	int num = 0;
//	for (i = 0; i < 26; i++)
//	{
//		if (alpha[i])
//			num++;
//	}
//	cout << num << endl;
//	system("pause");
//	return 0;
//}
//

//CodeForces - 445A
//题意：在棋盘中放黑白棋子，要求黑白棋子不能相邻，’-’处不能放棋子，输出’-’
//思路：对于棋盘中的每一个点，坐标是固定不变又独一无二的，相邻的两个棋子，一定是行i相差1，或者是列j相差1，因此相邻的棋子（i + j），一定相差1。
//		根据棋子所在位子的(i + j) % 2值的不同，可以将相邻的棋子涂成不同颜色。
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	char a[105][105];
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j] == '.' && ((i + j) % 2 == 0))
//				a[i][j] = 'B';
//			else if (a[i][j] == '.' && ((i + j) % 2 == 1))
//				a[i][j] = 'W';
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		cout << endl;
//		for (j = 1; j <= m; j++)
//		{
//			cout << a[i][j];
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}


//CodeForces - 440A 
//题意：一共n个节目，告诉你一共看了哪n-1个节目，问没看的节目是哪一个
//int main()
//{
//	int n;
//	cin >> n;
//	int s[100005] = { 0 };
//	int a;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a;
//		s[a] = 1;
//	}
//	for(int i=1;i<=n;i++)
//		if (s[i] != 1)
//		{
//			cout << i;
//			break;
//		}
//	cout << endl;
//	//system("pause");
//	return 0;
//}

//CodeForces - 447A 
//题意：给出n个数，问这些数对p取模的结果第一次重复是第几个数。如果没有重复，输出-1。
//int main()
//{
//	int p, n;
//	cin >> p >> n;
//	int i = 0;
//	int x;
//	int hash[305] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		cin >> x;
//		x %= p;
//		if (hash[x])
//		{
//			cout << i+1 << endl;
//			system("pause");
//			return 0;
//		}
//		hash[x]++;
//	}
//	cout << -1 << endl;
//	system("pause");
//	return 0;
//}

//CodeForces - 444A
//题意：给出一张图，图中的每个节点，每条边都有一个权值，现在从中挑出一张子图
//	   （子图要求联通，并且被选中的任意两点，如果存在边，则一定要被选中）。求密度最大的子图的密度。
//		密度用所有点的权值和/所有边的权值和表示
//思路：密度最大的子图一定只有两个点，再往里面加任何边，密度都会被拉低。
//证明：假设一个图现在有两个点 点权为v1，v2，他们之间相连的边的边权为m1，该图的密度为(v1 + v2) / m1。
//		如果增加一个点v3要让该图的密度增加，若v3与v2相连的边的边权为m2。
//		那么只有与v3 / m2>(v1 + v2) / m1，该图的密度才会增加。
//		但是此时，v2与v3两个点构成的子图的密度为（v2 + v3) / m2>(v1 + v2 + v3) / (m1 + m2)所以密度最大的子图一定只有两个点，找到两个点构成的密度最大的子图。

//double node[505] = { 0 };
//double edge[505][505] = { 0 };
//double ans[505][505] = { 0 };
//int main()
//{
//	int n, m;//n表示节点个数m表示边数
//	//第二行输入的n个数表示n个节点的值
//	//接下来的m行数字，每行包括3个数字，a，b，c表示这条边的两个节点是a和b，值为c
//	cin >> n >> m;
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> node[i];//存储节点node值
//	}
//	for (i = 1; i <= m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		cin >> edge[a][b];//每条edge的值
//	}
//	double max = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (edge[i][j] == 0)
//				continue;
//			else
//				ans[i][j] = (node[i] + node[j]) / edge[i][j];
//			max = max > ans[i][j] ? max : ans[i][j];
//		}
//	}
//	printf("%.15lf\n",max);
//	//system("pause");
//	return 0;
//}


//CodeForces - 441A
//题意：有n个古董卖家，第i个卖家有ki个古董要拍卖。
//		当前知道第i个卖家的第j件古董的拍卖价格为Sij，一个人和n个卖家的关系都比较好，
//		他非常确定只要他出价高于第i个卖家的古董之一的当前价格，第i个卖家就会和他达成协议。
//		但不幸的是，当前他仅仅只有v单位的钱了，问：他当前能和几个卖家达成协议，分别是哪几个(卖家按照标号呈上升序列给出)？
//思路：简单模拟一下即可。
//		将当前钱数与第i个卖家的所有古董拍卖价格进行比较，一旦发现当前钱数大于古董拍卖价格的情况，
//		就记录可以和该卖家达成协议了，然后用一个数组记录卖家信息，数组下标表示卖家个数，数组元素表示卖家标号。
//		最后和所有卖家古董拍卖价格都比较完了，直接输出最大数组下标，然后按顺序输出记录卖家标号的数组元素即可。
//int main()
//{
//	int n, money;//卖家总人数和买家总共资金数
//	cin >> n >> money;
//	int i, j;
//	int seller[55][55] = { 0 };
//	int ans[55] = { 0 };//用ans的下标表示能够购买其物品的卖家最大人数，元素内容表示卖家的具体号数
//	int max = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int num;
//		cin >> num;//要卖物品的件数
//		bool flag = false;
//		for (j = 1; j <= num; j++)
//		{
//			cin >> seller[i][j];//每一件物品的价格
//			if (money > seller[i][j] )//表示可以购买
//			{
//				flag = true;
//			}
//		}
//		if (flag)
//		{
//			ans[max++] = i;
//		}
//	}
//	cout << max << endl;
//	for (i = 0; i < max; i++)
//	{
//		cout << ans[i] << ' ';
//	}
//	cout << endl;
//	//system("pause");
//	return 0;
//}

//int main()
//{
//	int n, money;
//	cin >> n >> money;
//	int count = 0;
//	int ans[55] = { 0 };
//	int i, j;
//	int num;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> num;
//		while (num--)
//		{
//			int temp;
//			bool flag = false;
//			cin >> temp;
//			if (money > temp)
//			{
//				flag = true;
//			}
//			if (flag)
//			{
//				ans[count++] = i;
//			}
//		}
//	}
//	cout << count << endl;
//	for (i = 0; i < count; i++)
//	{
//		if (i == count-1)
//			cout << ans[count-1] << endl;
//		else
//			cout << ans[i] << ' ';
//	}
//	//system("pause");
//	return 0;
//}



//CodeForces - 446A 
//题意：给定一个序列A，要在这个序列A里面找到一个连续子串，
//		使得这个子串可以仅将其中某个元素修改为任意值然后得到一个严格单调递增的序列，问这样的子串最长是多少。
//

int main()
{
	int n;
	int num[100005] = { 0 };
	int flag;
	int count;
	cin >> n;
	int i,j;
	for (i = 1; i <= n; i++)
	{
		cin >> num[i];
	}
	for (i = 1; i < n; i++)
	{
		flag = 0;
		count = 0;
		for (j = i + 1; j <= n; j++)
		{
			if (num[i] > num[j])
				flag++;
			if (flag == 2)
			{
				break;
			}
			count++;
		}
		if (count == (n - i ))
		{
			cout << count+1 << endl;
			break;
		}
	}
	system("pause");
	return 0;
}