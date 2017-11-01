// The Dole Queue.cpp : �������̨Ӧ�ó������ڵ㡣
//UVA 133 The Dole Queue 
//��Ŀ��˼��N����վ��һȦ����ʱ����Ϊ1~N��������������Ա��A��Ա��1��ʼ��ʱ������B��Ա��N��ʼ˳ʱ������
//          ��ÿһ����A��Ա����k����ͣ������B��Ա����m����ͣ������ע��������ͬʱ���ģ����п�����������ͬһ�������ϡ�
//          ����Ա���е��ˣ�1������2�����뿪���顣����뿪�������Ա��ţ������A��Ա�������B��Ա�ģ�����ÿ���������ռ3���ַ����ȣ�һ������֮���ö��Ÿ��������һ������û�ж������
//����˼·����һ������chosenFlag[25]����¼��ǰ��ŵ����Ƿ��ڶ����У�����ÿһ�֣��������л��ڶ����е��ˣ�A��Ա�Ӵ����Լ�������һ�γ��ӵ��˵����ֱ߿�ʼ��ʱ����k��δ���ӵ��ˣ��տ�ʼ��ʱ��A��1��ʼ������
//          ͬʱB��Ա�����Լ�������һ�γ��ӵ��˵����ֱ߿�ʼ˳ʱ����m��δ���ӵ��ˣ��տ�ʼ��ʱ��B��N��ʼ�������жϱ����������Ƿ���ͬһ�ˣ������ͬ1����ֻ������������1�Σ������2����ֱ���������˵���ţ���Ӧ�����˵ĳ��ӱ�־��Ϊ1

#include<iostream>
using namespace std;


int main()
{
	int n, k, m;
	while (cin >> n >> k >> m && n && k && m)
	{
		int num[30] = { 0 };
		int i, j;
		for (i = 1; i <= n; i++)
			num[i] = i;
		int remainder = n;
		int flagA = k, flagB = m;//A��B��Ա��������
		int startA = 1, startB = n;//A��B��ʼ���ĵط�
		int outA, outB;
		while (remainder)//�����ﻹ����
		{
			while (flagA)
			{
				if (num[startA] != 0)//startA������û�г���
					flagA--;//�൱������1��
				startA++;//��֤��һ��
				if (startA > n)//��������n�����´�1��ʼ�����1���Ѿ�����
					startA = 1;
			}//A��Ա���꣬���е�ΪstartA-1
			if (startA == 1)
				outA = n;
			else
				outA = startA - 1;
			printf("%3d",outA);
			remainder--;
			if (remainder)//A��Ա���껹����
			{
				while (flagB)//B��Ա��ʼ��
				{
					if (num[startB] != 0)
						flagB--;
					startB--;
					if (startB < 1)
						startB = n;
				}
				if (startB == n)
					outB = 1;
				else
					outB = startB + 1;
				if (outA != outB)
				{
					printf("%3d", outB);
					num[outB] = 0;
					remainder--;
				}
			}
			num[outA] = 0;
			if (remainder)
				cout << ',';
			flagA = k;
			flagB = m;
		}
		cout << endl;
	}
    return 0;
}

