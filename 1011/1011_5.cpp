// 1011_5.cpp : �������̨Ӧ�ó������ڵ㡣
//Beautiful Matrix
//��һ��5*5�ľ��󣬾�����1��1��24��0��ɣ���Ϊ�þ������1�����ڵ����е�����Ҳ���Ǿ��������ʱ����һ��Ư���ľ���
//����ֻ���Զ�������������²�������������������н��н��������������н��н�����
//��������Ҫ�������ٴβ������Խ��þ����ΪƯ���ľ���

#include<iostream>
using namespace std;

int main()
{
	int i, j;
	int s[5][5];
	int place_i, place_j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			cin >> s[i][j];
			if (s[i][j] == 1)
			{
				place_i = i+1;
				place_j = j+1;
			}
		}
	int num = 0;
	if (place_i == 3 && place_j == 3)
		cout << num << endl;
	else
	{
		num = abs(place_i - 3) + abs(place_j - 3);
		cout << num << endl;
	}
    return 0;
}

