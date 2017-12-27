// Rectangles.cpp : 定义控制台应用程序的入口点。
//题意：给定两个矩形的两个对角线（注意：不包括斜对角线）位置的坐标，这两个矩形的边都和横纵坐标平行，求出这两个矩形重叠区域的面积
/*
那么这道题求矩形的公共面积可以分成2个问题

1.是否有公共的面积？
2.如果有公共面积，那么，是多少？？

先解决第一个问题。我们考虑数轴上的有2个线段，显然，如果2个线段要有相交的部分，那么这个相交的部分一定是2个线段左端点的较大值和右端点的较小值所构成的。

也就是说，【2个左端点的较大值和2个右端点的较小值】之间的部分就是我们需要的公共区间。

同时可以推出，如果左端点的较大值如果本身就比右端点的较小值要大，这2个线段绝对没有公共区间。

这个结论放在2维的坐标系中，很显然可以推出只要X坐标和Y坐标同时都满足上面这个条件！那么就一定会有公共区间。

另外需要注意的是，2个矩形相交，不意味着有一个顶点在另外一个矩形内。有反例。

那么我们只要根据
X轴上的2个左端点的较大值和2个右端点的较小值
y轴上的2个下端点的较大值和2个上端点的较小值
就能得出答案。

*/
#include<iostream>
#include<algorithm>
using namespace std;
double max(double a, double b)
{
	if (a > b) return a;
	else return b;
}
double min(double a, double b)
{
	if (a < b) return a;
	else return b;
}
void swap(double &x, double &y)
{
	double t;
	if (x > y)
	{
		t = x;
		x = y;
		y = t;
	}
}
int main()
{
	double x1, x2, x3, x4, y1, y2, y3, y4;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 && x1 != EOF)
	{
		double sum = 0;
		if (x1 > x2)
			swap(x1, x2);
		if (y1 > y2)
			swap(y1, y2);
		if (x3 > x4)
			swap(x3, x4); 
		if (y3 > y4)
			swap(y3, y4);
		if (x1 < x4&&x3 < x2&&y1 < y4&&y3 < y2)
		{
			sum = 1.0*fabs(max(x1, x3) - min(x2, x4))*fabs(max(y1, y3) - min(y2, y4));
		}
		printf("%.2f\n", sum);
	}
    return 0;
}

