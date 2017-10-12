// 1011_1.cpp : 定义控制台应用程序的入口点。
//n*m,a*a

#include<iostream>
using namespace std;


int main()
{
	long long  n, m, a;
	cin >> n >> m >> a;
	long long  num_length = m / a;
	long long  num_width = n / a;
	if (m%a)
		num_length++;
	if (n%a)
		num_width++;
	long long  num = num_length*num_width;
	cout << num << endl;
    return 0;
}

