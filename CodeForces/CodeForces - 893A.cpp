// CodeForces - 893A.cpp : 定义控制台应用程序的入口点。
//按输入给出的比赛结果模拟比赛的进行
//当某一局胜出的人是旁观者，则说明记录有误，输出NO，否则结果就是YES

#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int i, x[105] = { 0 };
	for (i = 1; i <= n; i++)
	{
		cin >> x[i];
	}
	bool flag = true;
	int WaitPerson = 3;
	for (i = 1; i <= n; i++)
	{
//		if (x[i] == WaitPerson)
////第一局比赛规定的是3等待，所以如果3赢了，log有问题，同样的后续比赛中如果出现赢的人是WaitPerson也是有错的
//		{
//			flag = false;
//			break;
//		}
//		else 
		if (x[i] == 1)//赢的人是1
		{
			if (WaitPerson == 1)
			{
				flag = false;
				break;
			}
			else if (WaitPerson == 2)//赢的人是1，等待的原来是2，现在变成3
			{
				WaitPerson = 3;
			}
			else if (WaitPerson == 3)//赢的人是1，等待的原来是3，现在变成2
			{
				WaitPerson = 2;
			}
		}
		else if(x[i]==2)//赢的人是2
		{
			if (WaitPerson == 2)
			{
				flag = false;
				break;
			}
			else if (WaitPerson == 1)//赢的人是2，等待的原来是1，现在变成3
			{
				WaitPerson = 3;
			}
			else if (WaitPerson == 3)//赢的人是2，等待的原来是3，现在变成1
			{
				WaitPerson = 1;
			}
		}
		else if (x[i] == 3)//赢的人是3
		{
			if (WaitPerson == 3)
			{
				flag = false;
				break;
			}
			else if (WaitPerson == 1)//赢的人是3，等待的原来是1，现在变成2
			{
				WaitPerson = 2;
			}
			else if (WaitPerson == 2)//赢的人是3，等待的原来是2，现在变成1
			{
				WaitPerson = 1;
			}
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	//system("pause");
    return 0;
}

