// 0922_6.cpp : 定义控制台应用程序的入口点。
//海选女主角
//输入数据有多组，每组的第一行是两个整数m和n，
//表示应聘MM的总共的行列数，然后是m行整数，每行有n个，m和n的定义见题目的描述。
//对于每组输入数据，输出三个整数x, y和s，分别表示选中的MM的行号、列号和分数。
//note : 行号和列号从一开始，如果有多个MM的分数绝对值一样，
//那么输出排在最前面的一个（即行号最小的那个，如果行号相同则取列号最小的那个）。

#include <iostream>
using namespace std;


int main()
{
	int m, n;//m行n列
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

