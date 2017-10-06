// 0927_4.cpp : 定义控制台应用程序的入口点。
//汉诺塔，递归调用
//从A将盘子移动到C

#include<iostream>
using namespace std;


void hanoi(int n,char from, char to ,char other)
{
	if (n == 1)
		cout << from << "->" << to << endl;//A上有一个盘子，直接移动到C上
	else
	{
		hanoi(n - 1, from, other, to);//将n-1个盘子从A移动到中间的B上
		hanoi(1, from, to, other);//将最后1个盘子从A移动到C上
		hanoi(n - 1, other, to, from);//将n-1个盘子从B移动到C上
	}
}

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		char from, to, other;
		from = 'A';
		to = 'C';
		other = 'B';
		hanoi(n, from, to, other);
	}
    return 0;
}

