// CodeForces - 742B.cpp : 定义控制台应用程序的入口点。
//给定的 n 个数中，当前第 i 个数和 i 之后的数 j ，满足 i xor j == x 的组数。

#include<iostream>
using namespace std;

int main()
{
	long long n, x;
	cin >> n >> x;
	long long i;
	long long temp;
	long long num = 0;
	long long store[100005] = { 0 };
	for (i = 1; i <= n; i++)
	{
		cin >> temp;
		num += store[temp^x];
		store[temp]++;
	}
	cout << num << endl;
	//system("pasue");
    return 0;
}

