// Box.cpp : 定义控制台应用程序的入口点。
//给定6个矩形的长和宽w和h(w和h为整数，且1<=w,h<=1000)，判断它们能否构成长方体的6个面
//先对6个矩形读入过程中，都将短边放在第一维长边放在第二维，然后对这6个矩形按照短边由小到大进行排序（短边相等时按照长边排序）；
//排完序后必然满足第1个和第2个矩形相同、第3和第4个相同、第5和第6个相同，如果不满足则没办法组成box，
//如果满足条件，再判断边长的关系，box的边长必然满足rect[0][0]=rect[2][0]且rect[0][1]=rect[4][0]且rect[2][1]=rect[4][1]，不满足则不可能组成box

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int rect[6][2];
	while (cin >> rect[0][0] >> rect[0][1] && rect[0][0] != EOF)
	{
		int ok=1;//判断标志位
		if (rect[0][0] > rect[0][1])
			swap(rect[0][0], rect[0][1]);//将小的放在第0列，大的放在第1列
		int i, j;
		for (i = 1; i < 6; i++)//将矩形的短边放在第0列，宽边放在第1列
		{
			cin >> rect[i][0] >> rect[i][1];
			if (rect[i][0] > rect[i][1])
				swap(rect[i][0], rect[i][1]);
		}
		for (i = 0; i < 6-1; i++)//冒泡排序，将所有矩形的短边按从小到大的顺序排列放置
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
		for (i = 0; i < 3; i=i+2)//6个矩形每两个长宽完全相等
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

