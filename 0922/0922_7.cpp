// 0922_7.cpp : �������̨Ӧ�ó������ڵ㡣
//��ƽ���ɼ�
//����һ������n(n<=50)��ѧ����ÿ�˿�m(m<=5)�ſΣ�
//��ÿ��ѧ����ƽ���ɼ���ÿ�ſε�ƽ���ɼ�����������Ƴɼ������ڵ���ƽ���ɼ���ѧ��������
//n��m���ֱ��ʾѧ�����Ϳγ�����Ȼ����n�����ݣ�ÿ�а���m���������������Է�������

#include <iostream>
using namespace std;


int main()
{
	int n, m;//n��ѧ��m�ƿγ�
	const int size = 100;
	while (cin >> n>> m)
	{
		if (n > 50 || m > 5 || n <= 0 || m <= 0)
			break;
		double score[size][size];
		double averProject[size], averStudent[size];//�γ�ƽ���ɼ���ѧ��ƽ���ɼ�
		int i, j;
		int flag;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				cin >> score[i][j];//���������i��ѧ���ĵ�j�ſγ̳ɼ�
			}
		}
		double sum;
		flag = 0;
		//����n��ѧ����ƽ���ɼ�
		for (i = 0; i < n; i++)
		{
			sum = 0;
			for (j = 0; j < m; j++)
			{
				sum += score[i][j];
				if (j == (m - 1))
				{
					if (flag)
						printf(" %.2f", sum / m);
					else
					{
						printf("%.2f", sum / m);
						flag = 1;
					}
					averStudent[i] = sum / m;
					break;
				}
			}
		}
		cout << endl;
		//����m�ſγ̵�ƽ���ɼ�
		flag = 0;
		for (j = 0; j < m; j++)
		{
			sum = 0;
			for (i = 0; i < n; i++)
			{
				sum += score[i][j];
				if (i == (n - 1))
				{
					if (flag)
						printf(" %.2f", sum / n);
					else
					{
						printf("%.2f", sum / n);
						flag = 1;
					}
					averProject[j] = sum / n;
					break;
				}
			}
		}
		cout << endl;
		//����ð��и��Ƴɼ������ڵ������ſ�ƽ���ɼ�������
		int num = 0;
		for ( i= 0; i < n; i++)
		{
			flag = 0;
			for (j = 0; j < m; j++)
			{
				if (score[i][j] >= averProject[j])
					flag++;
				if (flag == m)
					num++;
			}
		}
		cout << num << endl << endl;
	}
    return 0;
}

