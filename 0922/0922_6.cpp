// 0922_6.cpp : �������̨Ӧ�ó������ڵ㡣
//��ѡŮ����
//���������ж��飬ÿ��ĵ�һ������������m��n��
//��ʾӦƸMM���ܹ�����������Ȼ����m��������ÿ����n����m��n�Ķ������Ŀ��������
//����ÿ���������ݣ������������x, y��s���ֱ��ʾѡ�е�MM���кš��кźͷ�����
//note : �кź��кŴ�һ��ʼ������ж��MM�ķ�������ֵһ����
//��ô���������ǰ���һ�������к���С���Ǹ�������к���ͬ��ȡ�к���С���Ǹ�����

#include <iostream>
using namespace std;


int main()
{
	int m, n;//m��n��
	const int size = 100;
	while (cin >> m >> n)
	{
		if (m == 0 || n == 0)
			break;
		int a[size][size];
		int i, j;
		int row, column, score;
		row = column = score = 0;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> a[i][j];
				if (abs(a[i][j]) > abs(score))
				{
					row = i; column = j; score = a[i][j];
				}
			}
		}
		cout << row << ' ' << column << ' ' << score << endl;
	}
    return 0;
}

