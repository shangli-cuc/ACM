// HDU-2059.cpp : �������̨Ӧ�ó������ڵ㡣
//���⣺�����1��L��ʾ�ܵ����ȣ���2��N��C��T�ֱ��ʾ���վ�������綯���������ʻ���룬ÿ�γ������ʱ��
//��3��VR��VT1��VT2�ֱ��ʾ���ӵ��ٶȡ��ڹ꿪�綯�����ٶȡ��ڹ�ŵų����ٶȣ���4�е�N����������ʾ�������վ�������ľ���
//���ڹ��п���Ӯ��ʱ�������What a pity rabbit!�������������Good job,rabbit!����Ĭ��û��ͬʱ��������
/*
�����Ŀ��DP�ж�׶ξ��ߵĵ�������
�������յ㻮�ֵ�N���ӵ�վ��ȥ
����һ����N+2��,��DP[i]��ʾ����i���ӵ�վ����С�ķ�ʱ��
��ô����DP[i]��ʱ��DP[0]...DP[i-1]�Ѿ����
��j��0������i-1,ÿһ��j��ʾ���һ�γ�絽i��
��ô״̬ת�Ʒ���Ϊ
DP[i] = min(DP[j] + t(j, i)) //t(j, i)��ʾ��j�����һֱ��i��(��;û�г����)
*/
#include<iostream>
const double max = 0xfffff;//0x����ʮ������
using namespace std;
double min(double x, double y)
{
	return x > y ? y : x;
}
int main()
{
	double path_long;
	int power_num;
	double power_path_long, power_time;
	double rabbit_speed, power_speed, walk_speed;
	double power[105];
	double DP[105];
	while (cin >> path_long && path_long != EOF)//�ܵ����ܳ���
	{
		cin >> power_num >> power_path_long >> power_time;//���վ�ĸ������綯���������Ժ�����ʻ�ľ����Լ�ÿ�γ������Ҫ��ʱ��
		cin >> rabbit_speed >> power_speed >> walk_speed;//�����ܲ����ٶȣ��ڹ꿪�綯�����ٶȣ��ڹ�ŵŵ綯�����ٶ�
		int i, j, len;
		double time;
		for (i = 1; i <= power_num; i++)
		{
			cin >> power[i];//�������վ���ܵ����ľ���
		}
		power[0] = 0;//�������λ���г��վ���������㳤��Ϊ0
		power[power_num + 1] = path_long;//�����յ�λ���г��վ����������λ��Ϊ�ܵ��ܳ���path_long
		DP[0] = 0;//���λ��ʱ��Ϊ0
		for (i = 1; i <= power_num+1; i++)
		{
			DP[i] = max;//����ÿ�����վ����Ҫ�����ʱ�䣬��ʼ��Ϊ���
			for (j = 0; j <i; j++)
			{
				len = power[i] - power[j];
				if (len >= power_path_long)//����������վ���������糤�ȣ�ʣ�µľ�����walk_speed���ٶ�����
					time = (len - power_path_long) / walk_speed + power_path_long / power_speed;
				else
					time = len / power_speed;
				if (j > 0)
				{
					time += power_time;//���������㣬��Ҫ���ϳ��ʱ��
				}
				time += DP[j];
				DP[i] = min(DP[i], time);
			}
		}
		time = path_long / rabbit_speed;
		if (time > DP[power_num + 1])//���ӻ���ʱ������ڹ�
			cout << "What a pity rabbit!" << endl;
		else
			cout << "Good job,rabbit!" << endl;
	}
    return 0;
}

