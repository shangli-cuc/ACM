// 1011_2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include<iostream>
using namespace std;

int main()
{
	int w;
	cin >> w;
	if (w < 1 || w>100)
		return 0;
	if (w == 1 || w == 2)
		cout << "NO" << endl;
	else if (w % 2 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
