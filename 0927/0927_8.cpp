// 0927_8.cpp : 定义控制台应用程序的入口点。
//三角形
//给定三条边，请你判断一下能不能组成一个三角形。
//输入数据第一行包含一个数M，接下有M行，每行一个实例，包含三个正数A,B,C。其中A,B,C <1000;
//对于每个测试实例，如果三条边长A, B, C能组成三角形的话，输出YES，否则NO。

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		double s[3];
		cin >> s[0] >> s[1] >> s[2];
		if (s[0] >= 1000 || s[1] >= 1000 || s[2] >= 1000)
			break;
		sort(s, s + 3);
		if (s[0] + s[1] > s[2])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

