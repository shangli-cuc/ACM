// Box.cpp : �������̨Ӧ�ó������ڵ㡣
//����6�����εĳ��Ϳ�w��h(w��hΪ��������1<=w,h<=1000)���ж������ܷ񹹳ɳ������6����
//�ȶ�6�����ζ�������У������̱߷��ڵ�һά���߷��ڵڶ�ά��Ȼ�����6�����ΰ��ն̱���С����������򣨶̱����ʱ���ճ������򣩣�
//��������Ȼ�����1���͵�2��������ͬ����3�͵�4����ͬ����5�͵�6����ͬ�������������û�취���box��
//����������������жϱ߳��Ĺ�ϵ��box�ı߳���Ȼ����rect[0][0]=rect[2][0]��rect[0][1]=rect[4][0]��rect[2][1]=rect[4][1]���������򲻿������box

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int rect[6][2];
	while (cin >> rect[0][0] >> rect[0][1] && rect[0][0] != EOF)
	{
		int ok=1;//�жϱ�־λ
		if (rect[0][0] > rect[0][1])
			swap(rect[0][0], rect[0][1]);//��С�ķ��ڵ�0�У���ķ��ڵ�1��
		int i, j;
		for (i = 1; i < 6; i++)//�����εĶ̱߷��ڵ�0�У���߷��ڵ�1��
		{
			cin >> rect[i][0] >> rect[i][1];
			if (rect[i][0] > rect[i][1])
				swap(rect[i][0], rect[i][1]);
		}
		for (i = 0; i < 6-1; i++)//ð�����򣬽����о��εĶ̱߰���С�����˳�����з���
		{
			for (j = i; j < 6-1-i; j++)
			{
				if (rect[j][0] > rect[j + 1][0])
				{
					swap(rect[j][0], rect[j + 1][0]);
					swap(rect[j][1], rect[j + 1][1]);
				}
				else if (rect[j][0] == rect[j + 1][0])
				{
					if (rect[j][1] > rect[j + 1][1])
					{
						swap(rect[j][1], rect[j + 1][1]);
					}
				}
			}
		}
		for (i = 0; i < 6-1; i++)
		{
			if (rect[i][1] > rect[i + 1][1])
			{
				swap(rect[i][1], rect[i + 1][1]);
			}
		}
		for (i = 0; i < 3; i=i+2)//6������ÿ����������ȫ���
		{
			if (rect[i][0] != rect[i + 1][0] || rect[i][1] != rect[i + 1][1])
			{
				ok = 0;
				break;
			}
		}
		if (ok)
		{
			if (rect[0][0] != rect[2][0] || rect[0][1] != rect[4][0] || rect[2][1] != rect[4][1])
				ok = 0;
		}
		if (ok)
			cout << "POSSIBLE" << endl;
		else
			cout << "IMPOSSIBLE" << endl;
	}
    return 0;
}

