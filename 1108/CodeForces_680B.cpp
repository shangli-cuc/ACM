// CodeForces_680B.cpp : �������̨Ӧ�ó������ڵ㡣
//CodeForces 680B  Bear and Finding Criminals
//���⣺��n�����У����б��Ϊ1��n����Щ���зֲ���ͬһ�����ϣ����м�ľ���Ϊ���б�ŵľ���ֵ��
//      ÿ�����������һ��С͵��a����ס��һ�����죬���ھ�����һ����λ���ܹ�ȷ���������a���ɾ���ĵط���С͵��
//      ���ڸ������г����Ƿ���С͵�����ݣ�1��ʾ��С͵��0��ʾû��С͵�����ʾ�����ȷ��һ����С͵�ĳ����м�����
//����˼·������ÿ�����нڵ�i������ýڵ��ֵΪ1��������ڶԳƽڵ�0<2*a-i<=n�Լ��Գƽڵ��ֵҲΪ1������Զ϶����ڵ�һ����С͵��С͵�����ֻ��ȷ�����뾯��ĳ�������λ����С͵������ȷ��С͵�ľ���λ�ã���
//          ���ĳ���ڵ��ֵΪ1�Ҳ����ڶԳƽڵ㣬��һ�������ж��ýڵ����С͵��

#include<iostream>
using namespace std;


int main()
{
	int n, a;
	cin >> n >> a;
	int i;
	int flag[105] = { 0 };
	for (i = 1; i <= n; i++)
		cin >> flag[i];
	int num = 0;
	for (i = 1; i <= n; i++)
	{
		if (flag[i])
		{
			if (2 * a - i > 0 && 2 * a - i <= n && flag[a - i + a])
				num++;
			if (2 * a - i<1 || 2 * a - i>n)
				num++;
		}
	}
	cout << num << endl;
	system("pause");
    return 0;
}

/*
if (i == a && flag[i])
num++;
else */