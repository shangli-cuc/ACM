// 1006_1.cpp : �������̨Ӧ�ó������ڵ㡣
//���
//�������ݰ����������ʵ����ÿ������ʵ���ĵ�һ��ֻ��һ������n(n <= 100)��
//��ʾ��ϲ�����Ľ�Ŀ��������Ȼ����n�����ݣ�ÿ�а�����������Ti_s, Ti_e(1 <= i <= n)��
//�ֱ��ʾ��i����Ŀ�Ŀ�ʼ�ͽ���ʱ�䣬Ϊ�˼����⣬ÿ��ʱ�䶼��һ����������ʾ��
//n = 0��ʾ�����������������
//����ÿ������ʵ������������������ĵ��ӽ�Ŀ�ĸ�����ÿ������ʵ�������ռһ�С�
#include<iostream>
using namespace std;


int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int TimeStart[100], TimeEnd[100];
		int i, j;
		for (i = 0; i < n; i++)
			cin >> TimeStart[i] >> TimeEnd[i];
		for (i = 0; i < n-1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				int temp;
				if (TimeEnd[j] > TimeEnd[j + 1])
				{
					temp = TimeEnd[j];
					TimeEnd[j]=TimeEnd[j+1];
					TimeEnd[j + 1] = temp;

					temp = TimeStart[j];
					TimeStart[j] = TimeStart[j + 1];
					TimeStart[j + 1] = temp;
				}
			}
		}
		/*
		cout << endl;
		for (i = 0; i < n; i++)
			cout << TimeStart[i] << " " << TimeEnd[i] << endl;
		*/
		int num = 1;
		j = 0;
		for (i = 1; i < n; i++)
		{
			if (TimeStart[i]>=TimeEnd[j])
			{
				num++;
				j = i;
			}
		}
		cout << num << endl;
	}
    return 0;
}

