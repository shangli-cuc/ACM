// 1006_7.cpp : 定义控制台应用程序的入口点。
//汉诺塔之三
//不允许直接从最左(右)边移到最右(左)边(每次移动一定是移到中间杆或从中间移出)，
//也不允许大盘放到小盘的上面。如果我们允许最大的盘子放到最上面会怎么样呢？
//（只允许最大的放在最上面）当然最后需要的结果是盘子从小到大排在最右边。
//输入数据的第一行是一个数据T，表示有T组数据。
//每组数据有一个正整数n(1 <= n <= 20)，表示有n个盘子。
//对于每组输入数据，最少需要的摆放次数。
#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	long long step[30];
	step[0] = 0;
	step[1] = 1;
	for (int i = 2; i < 30; i++)
	{
		step[i] = 3 * step[i - 1] + 1;
	}
	while (n != EOF && n--)
	{
		int m;//盘子数
		cin >> m;
		if (m < 1 || m>20)
			break;
		cout << step[m - 1] * 2 + 2 << endl;
	}
	//system("pause");
    return 0;
}

