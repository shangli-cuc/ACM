// 0927_2.cpp : 定义控制台应用程序的入口点。
//多边形面积
//输入数据包含多个测试实例，每个测试实例占一行，每行的开始是一个整数n(3 <= n <= 100)，
//它表示多边形的边数（当然也是顶点数），
//然后是按照逆时针顺序给出的n个顶点的坐标（x1, y1, x2, y2... xn, yn）, 
//为了简化问题，这里的所有坐标都用整数表示。
//输入数据中所有的整数都在32位整数范围内，n = 0表示数据的结束，不做处理。
#include<iostream>
using namespace std;


int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0 || n < 3 || n>100)
			break;
		int i;
		int x1, x2, x3, y1, y2, y3;
		double area = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		n = n - 2;
		while (n--)
		{
			cin >> x3 >> y3;
			area += ((x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1));
			x2 = x3;
			y2 = y3;
		}
		printf("%.1f\n", area / 2.0);
	}
    return 0;
}

