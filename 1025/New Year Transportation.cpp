// New Year Transportation.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include<iostream>
using namespace std;


int main()
{
	int n, t;
	cin >> n >> t;
	int destination[100][1];//���͵�Ŀ�ĵ�
	int i;
	for (i = 1; i < n; i++)
	{
		cin >> destination[i][0];//��i�����ʹ����͵ĵط�
		destination[i][0] += i;
	}
	i = 1;
	while (true)
	{
		if (destination[i][0] == t)
		{
			cout << "YES" << endl;
			break;
		}
		i = destination[i][0];
		if (i >= n)
		{
			cout << "NO" << endl;
			break;
		}
	}
	system("pause");
    return 0;
}

