// 0921_5.cpp : �������̨Ӧ�ó������ڵ㡣
//��Ҽ�
//��һ����ճԵ���������һ���һ�����ڶ����ֽ�ʣ�µ����ӳԵ�һ���һ�����Ժ�ÿ��Ե�ǰһ��ʣ�µ�һ���һ����
//����n��׼���Ե�ʱ��ֻʣ��һ�����ӡ��������㣬��������һ�£�����һ�쿪ʼ�Ե�ʱ������һ���ж��ٸ��أ�


#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n <= 1 || n >= 30)
			break;
		int sum = 1;
		int i;
		for (i = 1; i <n; i++)
		{
			sum = (sum + 1) * 2;
		}
		cout << sum << endl;
	}
    return 0;
}
