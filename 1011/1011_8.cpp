// 1011_8.cpp : 定义控制台应用程序的入口点。
//Repeating Decimals
//输入两个整数a和b（0<=a<=3000,1<=b<=3000），输出a/b的循环小数表示以及循环节长度，
//例如：a=1，b=250，小数表示为0.004(0),循环节长度为1；
//a=5,b=43,小数表示为0.(116279069767441860465)，循环节长度为21。

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b;
	int m;//记录余数
	int result[3005];
	int loopPos;
	int remainder[3005];
	int remLength;
	while (cin >> a >> b &&a != EOF &&b != EOF)
	{
		if (a < 0 || a>3000 || b < 1 || b>3000)
			break;
		//memset(result, 0, sizeof(result));
		result[3005] = { 0 };
		//memset(remainder, -1, sizeof(remainder));
		for (int i = 0; i < 3005; i++)
			remainder[i] = -1;
		loopPos = 0;
		remLength = 0;
		printf("%d/%d = %d.", a, b,a/b);
		m = a%b;//余数部分
		while (true)
		{
			if (m == 0)//整除，没有余数
			{
				for (int i = 0; i < remLength; i++)
					cout << result[i];
				cout << "(0)" << endl<< "   " << "1 = number of digits in repeating cycle" 
					<< endl << endl;
				break;
			}
			for (int i = 0; i < remLength; i++)//如果得到的余数和之前的某次余数相等，表示找到循环节
			{
				if (m == remainder[i])
				{
					loopPos = i;
					break;
				}
			}
			if (m == remainder[loopPos])
			{
				for (int i = 0; i < remLength; i++)
				{
					if (i == loopPos)
						cout << "(";
					cout << result[i];
					if (i - loopPos >= 49)
					{
						cout << "...";
						break;
					}
				}
				cout << ")" << endl << "   " << remLength-loopPos
					<<" = number of digits in repeating cycle" << endl << endl;
				break;
			}
			remainder[remLength] = m;//存放余数
			result[remLength] = 10 * m / b;//存放小数部分结果
			remLength++;
			m = 10 * m%b;

		}
	}
}

