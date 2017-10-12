// 1011_4.cpp : 定义控制台应用程序的入口点。
//出租车分配问题
//有4人、3人、2人、1人一组的四种情况，相同小组必须搭乘同一辆车同时不同小组允许同时搭乘同一辆车
//输出所需车辆的最小车数

#include<iostream>
using namespace std;

/*
int main()
{
	long long n;
	cin >> n;
	if (n < 1 || n>100000)
		return 0;
	int i, j;
	int s[100];
	int num = 0;
	for (i = 0; i < n; i++)
	{
		cin >> s[i];
		if (s[i] > 4 || s[i] < 1)
			return 0;
		if (s[i] == 4)
		{
			num++;
			s[i] = 0;
		}
	}
	int sum;
	for (i = 0; i < n; i++)
	{
		if (s[i])
		{
			sum = 4 - s[i];
			int flag = 1;
			for (j = 0; j < n; j++)
			{
				if (s[j] <= sum && i != j && s[j]!=0)
				{
					if (flag)
					{
						num++;
						flag = 0;
					}
					sum -= s[j];
					s[i] = 0;
					s[j] = 0;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (s[i])
			num++;
	}
	cout << num << endl;
    return 0;
}
*/

/*
int main()
{
		long n;
		cin >> n;
		if (n < 1 || n>100)
			return 0;
		int i;
		int s[100];
		int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
		for (i = 0; i < n; i++)
		{
			cin >> s[i];
			if (s[i] == 4)
				n4++;
			else if (s[i] == 3)
				n3++;
			else if (s[i] == 2)
				n2++;
			else
				n1++;
		}

		int num = n4;//4人组的自己走

		if (n3 <= n1)//3人组和1人组拼车
		{
			num += n3;
			n1 = n1 - n3;
			n3 = 0;
		}
		else//(n3 > n1)
		{
			num += n1;
			n3 = n3 - n1;
			n1 = 0;
		}

		if (n3)//多余的三人组自己走
			num += n3;

		if (n2 % 2 == 0)//2人组的和2人组拼车
		{
			num += (n2 / 2);
			n2 = 0;
		}
		else
		{
			num += (n2 / 2);
			n2 = n2 % 2;
		}

		if (n2 && n1 <= 2)//有多余2人组的时候和1人组拼车
		{
			num++;
			n2 = 0;
			n1 = 0;
		}
		else if (n2 && n1 > 2)
		{
			num++;
			n2 = 0;
			n1 -= 2;
		}

		if (n1 % 4 == 0)
		{
			num += (n1 / 4);
			n1 = 0;
		}
		else
		{
			num += (n1 / 4);
			n1 = n1 % 4;
		}
		if (n1)
			num++;
		cout << num << endl;
	//system("pause");
	return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, s;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	for (i = 0; i < n; i++)
	{
		cin >> s;
		switch (s)
		{
		case 4:
			n4++;
			break;
		case 3:
			n3++;
			break;
		case 2:
			n2++;
			break;
		case 1:
			n1++;
			break;
		}
	}
	int num = n4;
	num += n3;
	n1 -= n3;
	num += n2 / 2;
	if (n2 % 2 )
	{
		num++;
		n1 -= 2;
	}
	if (n1 > 0)
		num += (n1 + 3) / 4;
	cout << num << endl;
	//system("pause");
	return 0;
}