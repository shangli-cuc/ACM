// CodeForces - 742B.cpp : �������̨Ӧ�ó������ڵ㡣
//������ n �����У���ǰ�� i ������ i ֮����� j ������ i xor j == x ��������

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

