// 0921_6.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
#include<algorithm>
using namespace std;


int main()
{
	int N;
	const int size = 100;
	while (cin >> N)
	{
		double a[size];
		int i;
		double sum=0;
		for (i = 0; i < N; i++)
		{
			cin >> a[i];
		}
		sort(a, a + N);
		for (i = 1; i < N-1; i++)
		{
			sum += a[i];
		}
		printf("%.2f\n", sum / (N - 2));

	}
    return 0;
}

