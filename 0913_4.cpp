// 0913_4.cpp : �������̨Ӧ�ó������ڵ㡣
//������һ���������������������������ݣ������

#include <iostream>
using namespace std;

/*
int main()
{
int N,i;
while (cin >> N)
{
if (N == 0)
break;
else
{
for (i = 1; i <= N; i++)
cout << i << ' ';
cout << endl<<N*(1 + N) / 2;
}
}

return 0;
}
*/
int main()
{
	int N, i;
	while (cin >> N)
	{
		if (N == 0)
			break;
		else
		{
			int sum = 0;
			int x;
			for (i = 1; i <= N; i++)
			{
				cin >> x;
				sum = sum + x;
			}
			cout << sum << endl;
			
		}
	}

	return 0;
}

