// CodeForces - 893C.cpp : 定义控制台应用程序的入口点。
//题意：你可以收买每一个人，收买他之后相当于收买了他所有的朋友(双向的)，问最少多少钱可以收买到所有人。
//解题思路：典型的并查集

#include<iostream>
#include<algorithm>
using namespace std;

long long father[100005];
long long getfather(long long x)//寻找父辈
{
	if (x == father[x])
	{
		return father[x];
	}
	else
	{
		father[x] = getfather(father[x]);
		return father[x];
	}
	//这里用到了路径压缩，使得所有的从属关系只有两层
	//if (x != father[x])//x的父辈不是自己本身
	//	father[x] = getfather(father[x]);//让x父辈的父辈（最顶层的父辈）做x的直接父辈
	//return father[x];
}
void join(long long a, long long b)//将ab连接起来，具体办法是让b的父辈做a父辈的父辈，或者反过来也行
{
	long long father_a, father_b;
	father_a = getfather(a);
	father_b = getfather(b);
	if (father_a != father_b)
		father[father_a] = father_b;
}
int main()
{
	long long n, m;
	cin >> n >> m;
	long long i, a[100005];
	for (i = 1; i <= n; i++)//相当于初始化父辈数组father
		father[i] = i;//father[i]存储的是i的父辈，开始默认是本身
	for (i = 1; i <= n; i++)//输入收买每个人需要的金钱数
		cin >> a[i];
	for (i = 1; i <= m; i++)
	{
		long long a, b;
		cin >> a >> b;
		join(a, b);
	}
	for (i = 1; i <= n; i++)
	{
		a[getfather(i)] = min(a[getfather(i)], a[i]);//a[i]里存的是i的贿金，a[father[i]]存的是i父辈需要的贿金，从里面选出最小的，最小结果存储在最顶层父辈的a[i]
	}
	long long sum = 0;
	for (i = 1; i <= n; i++)
	{
		if (i == getfather(i))//检测到i的父辈是它本身，也就是说找到了顶层父辈，因为只有两层结构
			sum += a[i];
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}