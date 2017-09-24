// 0922_7.cpp : 定义控制台应用程序的入口点。
//求平均成绩
//假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，
//求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量。
//n和m，分别表示学生数和课程数。然后是n行数据，每行包括m个整数（即：考试分数）。

#include <iostream>
using namespace std;


int main()
{
	int n, m;//n个学生m科课程
	const int size = 100;
	while (cin >> n>> m)
	{
		if (n > 50 || m > 5 || n <= 0 || m <= 0)
			break;
		double score[size][size];
		double averProject[size], averStudent[size];//课程平均成绩，学生平均成绩
		int i, j;
		int flag;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				cin >> score[i][j];//依次输入第i个学生的第j门课程成绩
			}
		}
		double sum;
		flag = 0;
		//计算n个学生的平均成绩
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
		//计算m门课程的平均成绩
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
		//计算该班中各科成绩均大于等于这门课平均成绩的人数
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

