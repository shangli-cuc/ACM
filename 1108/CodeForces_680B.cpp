// CodeForces_680B.cpp : 定义控制台应用程序的入口点。
//CodeForces 680B  Bear and Finding Criminals
//题意：有n个城市，城市编号为1到n，这些城市分布在同一条线上，城市间的距离为城市编号的绝对值，
//      每个城市最多有一名小偷，a城市住了一个警察，现在警察有一个定位仪能够确定距离城市a若干距离的地方有小偷。
//      现在给定所有城市是否有小偷的数据（1表示有小偷、0表示没有小偷），问警察能确定一定有小偷的城市有几个。
//解题思路：遍历每个城市节点i，如果该节点的值为1，且其存在对称节点0<2*a-i<=n以及对称节点的值也为1，则可以断定本节点一定有小偷（小偷检测器只能确定距离警察某个距离的位置有小偷，并不确定小偷的具体位置）；
//          如果某个节点的值为1且不存在对称节点，则一定可以判定该节点存在小偷。

#include<iostream>
using namespace std;


int main()
{
	int n, a;
	cin >> n >> a;
	int i;
	int flag[105] = { 0 };
	for (i = 1; i <= n; i++)
		cin >> flag[i];
	int num = 0;
	for (i = 1; i <= n; i++)
	{
		if (flag[i])
		{
			if (2 * a - i > 0 && 2 * a - i <= n && flag[a - i + a])
				num++;
			if (2 * a - i<1 || 2 * a - i>n)
				num++;
		}
	}
	cout << num << endl;
	system("pause");
    return 0;
}

/*
if (i == a && flag[i])
num++;
else */