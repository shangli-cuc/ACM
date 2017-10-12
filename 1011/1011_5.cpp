// 1011_5.cpp : 定义控制台应用程序的入口点。
//Beautiful Matrix
//有一个5*5的矩阵，矩阵由1个1和24个0组成，认为该矩阵如果1出现在第三行第三列也就是矩阵的中心时这是一个漂亮的矩阵。
//现在只可以对这个矩阵做如下操作：将矩阵的相邻两行进行交换或者相邻两列进行交换，
//问至少需要经过多少次操作可以将该矩阵变为漂亮的矩阵？

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

