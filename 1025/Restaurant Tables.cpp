// Restaurant Tables.cpp : 定义控制台应用程序的入口点。
//codeforces 828A Restaurant Tables 
//一个饭店只有一人桌和2人桌，如果来的个人是1人则优先安排1人桌坐下，如果没有一人桌则安排空的2人桌，
//如果没有空的2人桌则安排拼桌，否则拒绝服务；如果来的是两人，有空余的两人桌则提供服务，否则拒绝服务。
//给定客人信息以及一人桌的数目和2人桌的数目，问会有多少客人被拒绝服务。
//解题思路：先定义一个变量记录2人桌只坐了1人的数量num2Only1，来一组客人，先判断一下他是一人还是两人。
//          如果是1人，则先看一下一人桌是不是有空位置，如果一人桌没有空位置就看一下二人桌有没有空位置，
//          如果二人桌也没有空位置则判断2人桌只坐了1人是否有空位，有则安排无则拒绝；
//          如果是2人，直接看2人桌有没有，没有直接拒绝服务。

#include<iostream>
using namespace std;
int main()
{
	int n, a, b;//n组人，a张单人桌，b张双人桌
	cin >> n >> a >> b;
	int i;
	int mem[200005];
	int num2only1 = 0;
	int num = 0;
	for (i = 0; i < n; i++)
	{
		cin >> mem[i];
		if (mem[i] == 1)
		{
			if (a)//先安排1人组，有单人桌时安排在单人桌
			{
				a -= 1;
				mem[i] = 0;
			}
			else if (a == 0 && b)//没有单人桌，有双人桌时安排在双人桌
			{
				b -= 1;
				mem[i] = 0;
				num2only1++;
			}
			else if (num2only1)//如果没有空余的双人桌，有可以拼桌的安排拼桌
			{
				mem[i] = 0;
				num2only1--;
			}
		}
		else if(mem[i] == 2)
		{
			if (b)
			{
				b -= 1;
				mem[i] = 0;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (mem[i] == 1)
			num++;
		else if (mem[i] == 2)
			num += 2;
	}
	cout << num << endl;
	system("pause");
    return 0;
}

