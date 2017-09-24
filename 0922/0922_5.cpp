// 0922_5.cpp : 定义控制台应用程序的入口点。
//发工资咯
//财务处的小胡老师最近就在考虑一个问题：如果每个老师的工资额都知道，最少需要准备多少张人民币，
//才能在给每位老师发工资的时候都不用老师找零呢？
//这里假设老师的工资都是正整数，单位元，人民币一共有100元、50元、10元、5元、2元和1元六种
#include <iostream>
using namespace std;


int main()
{
	int n;
	const int size = 100;
	while (cin >> n)
	{
		if (n <= 0 || n>=100)
			break;
		int a[size];
		int i;
		int sum = 0;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i] / 100;
			sum += a[i] % 100 / 50;
			sum += a[i] % 100 % 50 / 20;
			sum += a[i] % 100 % 50 % 20 / 10;
			sum += a[i] % 100 % 50 % 20 % 10 / 5;
			sum += a[i] % 100 % 50 % 20 % 10 % 5 / 2;
			sum += a[i] % 100 % 50 % 20 % 10 % 5 % 2 / 1;
		}
		cout << sum << endl;
	}
    return 0;
}

