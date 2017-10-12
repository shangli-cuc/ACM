// 1011_3.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
using namespace std;


int main()
{
	int n, k;
	cin >> n >> k;
	if (k<1 || n<k || n > 50)
		return 0;
	int i;
	int s[50];
	for (i = 0; i < n; i++)
		cin >> s[i];
	int num = 0;
	for (i = 0; i < n; i++)
	{
		if (s[i] >= s[k - 1] && s[i]>0)
			num++;
	}
	cout << num << endl;
    return 0;
}

