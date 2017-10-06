// 0927_5.cpp : 定义控制台应用程序的入口点。
//
//f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.
//Given A, B, and n, you are to calculate the value of f(n).

#include<iostream>
using namespace std;


int main()
{
	int A,B,n;
	while (cin >> A>>B>>n)
	{
		if (A==0 || B==0 || n == 0)
			break;
		int result[49];
		result[1] = result[2] = 1;
		int i;
		for (i = 3; i <49; i++)
		{
			result[i] = (A*result[i - 1] + B*result[i - 2]) % 7;
		}
		cout << result[n%49] << endl;
	}
    return 0;
}

