// CodeForces - 895A.cpp : �������̨Ӧ�ó������ڵ㡣
// ��Ŀ����˼�Ǹ���һ�������ҳ�һ�������ǵ����ĺ���ʣ�µ��������ĺͲ�ֵ��С������С��ֵ

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int x[361] = { 0 }, sum = 0;
	int i, j, ans = 10e9;
	for (i = 1; i <= n; i++)
		cin >> x[i];
	for (i = 1; i <= n; i++)
	{
		sum = 0;
		for (j = i; j <= n; j++)
		{
			sum += x[j];
			ans = min(ans, abs(360 - 2 * sum));
		}
	}
	cout << ans << endl;
	system("pause");
    return 0;
}

