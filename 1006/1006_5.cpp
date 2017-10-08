// 1006_5.cpp : 定义控制台应用程序的入口点。
/*环形染色问题
* RPG三种颜色每格涂一色，要求任何相邻的方格不能同色，
* 且首尾两格也不同色．求全部的满足要求的涂法
*/

#include<iostream>
using namespace std;


int main()
{
	int n;
	while (cin >> n && n != EOF)
	{
		if (n <= 0 || n > 50)
			break;
		long long s[60] = { 0,3,6,6 };
		for (int i = 4; i < 60; i++)
		{
			s[i] = s[i - 1] + 2 * s[i - 2];
		}
		cout << s[n] << endl;
	}
    return 0;
}

