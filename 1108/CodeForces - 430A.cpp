// CodeForces - 430A.cpp : 定义控制台应用程序的入口点。
//题目大意：在数轴上给定n个点，m条线段，对于所有线段i，若点j满足li<=j<=ri，
//则说：点j在线段i上。要求将所给的点红蓝染色，使得对于任意一条线段，在这条线段上的红色点数ri，蓝色点数bi，满足|ri-bi|<=1。
//解析：无论线段如何，只要点按照“0101010……”这种方法，从左到右画即可。
//最后要按照输入时的顺序输出，线段什么的不用考虑。



#include<iostream>
#include<algorithm>
using namespace std;
const int N = 110;
struct point
{
	int x; 
	int id;
}pt[N];
bool cmp(point a ,point b)
{
	return a.x < b.x;
}
int main()
{
	int n, m;
	cin >> n >> m;
	int i;
	int ans[N];
	for (i = 0; i < n; i++)
	{
		cin >> pt[i].x;
		pt[i].id = i;
	}
	sort(pt, pt + n, cmp);//sort()函数对结构体排序，cmp表示规则，无须传参
	int right, left;
	for (i = 0; i < m; i++)//线段无须考虑
		cin >> right >> left;

	for (i = 0; i < n; i++)
	{
		ans[pt[i].id] = i % 2;
	}

	cout << ans[0];
	for (i = 1; i < n; i++)
		cout << ' ' << ans[i];
	cout << endl;
	//system("pause");
    return 0;
}

