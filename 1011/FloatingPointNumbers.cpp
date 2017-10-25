// FloatingPointNumbers.cpp : 定义控制台应用程序的入口点。
//Floating-Point Numbers
//计算机常用阶码-尾数的方法保存浮点数。例如如果阶码有6位，尾数有8尾，则可以表达的最大浮点数为0.111111111(二进制)*2^(111111为二进制)，
//因为要求小数点后第一位必须为1，因此一共有9位小数。这个数算成十进制之后就变为0.998046875*2^63 = 9.205357638345294*10^18。
//现在给定一个十进制表示的最大浮点数AeB(0<A<10)，要求求出阶码的位数E和尾数的位数M( 0<=M<=9, 1<=E<=30 )。

#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;


int main()
{
	long long E[10][31];//存储整数部分
	double M[10][31];//存储小数部分
	double m,e,t;//m*2^e
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j <= 30; j++)
		{
			m = (1 - pow(2, -1-i));//尾数部分
			e = pow(2, j) - 1;//阶数部分
			t = log10(m) + e*log10(2);
			E[i][j] = floor(t);//整数部分
			M[i][j] = pow(10, t- E[i][j]);//小数部分
		}
	}
	//log(m*2^e)=log(A*10^B)
	//logm+e*log2=logA+B=t;
	//t的整数部分为B，小数部分为logA
	//B=floor(t),A=10^(t-B)
	string s;
	while (cin >> s && s != "0e0")
	{
		for (string::iterator iter = s.begin(); iter != s.end(); iter++)
		{
			if (*iter == 'e')
			{
				*iter = ' ';
				break;
			}
		}
		stringstream ss;
		ss << s;
		double A, B;
		ss >> A >> B;
		if (A < 1)
		{
			A *= 10;
			B -= 1;
		}
		for(i=0;i<=9;i++)
			for (j = 1; j <= 30; j++)
			{
				if (B == E[i][j] && (fabs(A - M[i][j])<1e-4))
				{
					cout << i << ' ' << j << endl;
					break;
				}
			}
	}
	system("pause");
    return 0;
}

