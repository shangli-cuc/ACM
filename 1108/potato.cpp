// potato.cpp : �������̨Ӧ�ó������ڵ㡣
//CodeForces  677B Vanya and Food Processor 
//���⣺��n��������Ҫ�У����������ĸ߶�Ϊh����ÿ���ӿ����и߶�k������������߶Ȳ���k��Ҳ��Ҫ1�����ꡣ
//      ���ڸ���n�����������ո�����˳��һ�����ŵ�������������ȥ�У��е�ʱ��1���ӿ������������飺
//      ������ֻ��һ����������������ʱ����Ҫ������һ�����ŵ������������棬ֱ��û�ж���Ŀռ���Է�����һ������Ϊֹ��ͬʱ�е�k�߶ȵ��������������kҲ�������������ʣ�������е�����
//      ���е�������n��������Ҫ�೤ʱ��
//����˼·�������������������ֱ���߶�h�������µ�����ʱ��ʼ���������У�����ĸ߶�/k���룬
//          �ж�ʣ�µ�����������ĸ߶�%k���Ƿ��ܹ������µ�����������������µ�����������Ҫ��ȫ���꣬����Ϳ��Լ����µ�һ�ַ�����

#include<iostream>
using namespace std;

int main()
{
	int n, h, k;
	cin >> n >> h >> k;
	long long i;
	long long potato = 0;
	long long potato_left = 0;
	long long time = 0;
	for (i = 0; i < n; i++)
	{
		cin >> potato;
		if (potato + potato_left >= h)
		{
			time += (potato_left / k);
			potato_left = (potato_left%k);
			if (potato + potato_left > h)
			{
				time++;
				potato_left = 0;
			}
			potato_left += potato;
		}
		else
			potato_left += potato;
	}
	if (potato_left)
	{
		time += (potato_left / k);
		if (potato_left%k)
			time++;
	}
	cout << time << endl;
	//system("pause");
    return 0;
}

