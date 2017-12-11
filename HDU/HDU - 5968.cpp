// HDU - 5968.cpp : �������̨Ӧ�ó������ڵ㡣
//���⣺��һ��������ҳ�һ�������������У�Ҫ�������е�������������ֵĲ�ľ���ֵ��С������ֵ���ʱ��ѡ�����г��Ƚϳ��ģ����������г���
/*
����Ĺؼ������������������
���������Ϳ������Ƶ����������һ������ǰ׺�������������
ע�⵽�����е����ַ�Χ��1��1024�������������͵Ľ�����ֻΪ2047
ö���������䣬����ǰ׺���������������
������save[i]��¼�������ͽ��Ϊi�����������䳤��
��������ÿһ��ѯ�ʣ�ֻ��Ҫɨһ��save���鼴�ɵõ���
*/

#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T-- && T!=EOF)
	{
		int n, m, a[105] = { 0 }, x[105] = { 0 }, sum[105] = { 0 }, save[2050] = { 0 };
		int i, j;

		cin >> n;
		for (i = 1; i <= n; i++)cin >> a[i];
		cin >> m;
		for (i = 1; i <= m; i++)cin >> x[i];
		for (i = 1; i <= n; i++)
			sum[i] = sum[i - 1] ^ a[i];//ǰ׺���ͣ�ÿ��ֵ��ʾ��iΪֹ�����е�����
		for (i = 1; i <= n; i++)
		{
			for (j = i; j <= n; j++)
			{
				int num = sum[j] ^ sum[i - 1];//��ǰ׺���������������е����ͣ���ʾ��i��j���е�����
				if (j - i + 1 > save[num])//���ĳ�������е�����num��ȣ�ѡ�����г��Ƚϳ���
					save[num] = j - i + 1;//����save�����ֵ��ʾ����Ϊnum�����г���
			}
		}
		//��ʼѯ��
		for (i = 1;i <= m; i++)
		{
			int MIN = 10e9, result;
			for (j = 0; j <= 2049; j++)
			{
				if (save[j]>0)
				{
					if (abs(j - x[i]) < MIN)
					{
						MIN = abs(j - x[i]);
						result = save[j];
					}
					else if (abs(j - x[i]) == MIN && save[j]>result)
					{
						result = save[j];
					}
				}
			}
			cout << result << endl;
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}