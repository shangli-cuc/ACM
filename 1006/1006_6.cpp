// 1006_6.cpp : 定义控制台应用程序的入口点。
//汉诺塔之二
//改变游戏规则：规定不能直接将盘子从最左（右）直接移动到最右（左），必须经过中间的转接

#include<iostream>
using namespace std;


////////////////////////输出具体步骤的代码////////////////////////
/*
char from = 'A', to = 'C', other = 'B';
long long num;

void hanoi2(int n, char from, char to)
{
	if (n == 1)
	{
		cout << from << "->" << to << endl;
		num++;
	}
}
void hanoi3(int n,char from,char other,char to)
{
	if (n == 1)
	{
		cout << from << "->" << other << "->" << to << endl;
		num += 2;
	}
	else
	{
		hanoi3(n - 1, from, other,to);//n-1个盘子从A放到B再放到C
		hanoi2(1, from, other);//最后一个盘子从A放到B
		hanoi3(n - 1, to, other,from);//n-1个盘子从C放到B再放到A
		hanoi2(1, other, to);	//最后一个盘子从B放到C
		hanoi3(n - 1, from, other,to);	//n-1个盘子从A放到B再放到C
	}
}
*/

///////////////////输出移动步骤数量的代码//////////////////
int main()
{
	int n;
	while (cin >> n && n != EOF)
	{
		long long step[100];
		step[1] = 1;//将1块盘子移动到旁边的柱子上需要1步
		//num = 0;
		if (n < 1 || n>35)
			break;
		//hanoi3(n,from,other,to);
		//cout << num << endl;
		for (int i = 2; i < 100; i++)
		{
			step[i] = 3 * step[i-1] + 1;//将n-1块盘子移动到旁边的柱子需要
			//step[n-1]步，那么将n块盘子移动到旁边的柱子需要的step[n]可知
		}
		cout << 2*step[n] << endl;//将n块盘子从A移动到C的步数
	}
    return 0;
}

