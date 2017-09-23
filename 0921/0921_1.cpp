// 0921_1.cpp : 定义控制台应用程序的入口点。
//一段连续整数中所有偶数的平方和与所有奇数的立方和

#include <iostream>
using namespace std;

int OddNum(int x)
{
	if (x % 2 == 0)
		return 1;//1代表偶数
	else
		return 0;//0代表奇数
}

int main()
{
	int n, m;
	const int size = 100;
	while (cin >> n >> m)
	{
		if (n > m)
		{
			int temp;
			temp = n;
			n = m;
			m = temp;
		}
		int a[size], i = 0;
		int OddSum = 0, EvenSum = 0;
		int num = m - n + 1;
		do
		{
			a[i] = n;
			n++;
			i++;
		} while (n <= m);
		
		for (i = 0; i < num; i++)
		{
			if (OddNum(a[i]))
				EvenSum += pow(a[i], 2);
			else
				OddSum += pow(a[i], 3);
		}
		cout << EvenSum << ' ' << OddSum << endl;
	}
    return 0;
}

