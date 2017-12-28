// HDU-2058.cpp : �������̨Ӧ�ó������ڵ㡣
//���⣺��������������N��M��N��ʾ��1��N�ĵ������У�������к�ΪM�������У�N=M=0��Ϊ������־
//˼·����һ���˼·����ѭ���϶��ᳬʱ���������룬������������ʲô��ֻ���Ǵ�1��ʼ�������У���ô�����1��ʼ�ӵ�ĳ��������Ҫ��
//���ո��еȲ����е�֪ʶ����֪����((����+ĩ��)*����)/2=m������Ϊ1��ĩ��=����+����-1����(1+n)*n=2m��������n��������������֪����������
//����max=sqrt(2m)������δ֪��ĩ����������������棬����Ϊѭ����i��������������Ϊ����������ʾ����
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

//int main()
//{
//	long long n, m;
//	while (cin >> n >> m && n != 0 && m != 0)
//	{
//		long long i, j;
//		long long num = min(n, m);
//		long long sum;
//		for (i = 1; i <= num; i++)
//		{
//			sum = 0;
//			for (j = i; j <= num; j++)
//			{
//				sum += j;
//				if (sum > m)
//					break;
//				else if (sum == m)
//				{
//					printf("[%ld,%ld]\n", i, j);
//					break;
//				}
//			}
//		}
//		cout << endl;
//	}
//    return 0;
//}
//

int main()
{
	long long n, m;
	while (cin >> n >> m &&n != 0 && m != 0)
	{
		int i;
		for (i = (floor)(sqrt(2 * m)); i >= 1; i--)
		{
			double x = ((1.0 * 2 * m / i) + 1 - i) / 2.0;
			int a = floor(x);
			if (a == x && x <= n && (x + i - 1) <= n)
			{
				printf("[%ld,%ld]\n", a, a + i - 1);
			}
		}
		cout << endl;
	}
	return 0;
}