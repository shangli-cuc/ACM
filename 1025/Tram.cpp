// Tram.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int num = 0, maxNum = 0;
	int n;
	cin >> n;
	int a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		num -= a;
		num += b;
		maxNum = max(num, maxNum);
	}
	cout << maxNum << endl;
	system("pause");
    return 0;
}

