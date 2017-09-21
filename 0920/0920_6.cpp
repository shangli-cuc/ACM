// 0920_6.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;


int main()
{
	int AH, AM, AS, BH, BM, BS;
	int N, flag = 1;
	int second, minute, hour;
	cin >> N;
	while (flag<=N)
	{
		cin >> AH >> AM >> AS >> BH >> BM >> BS;
		if ((AS + BS) >= 60)
		{
			minute = 1;
			second = AS + BS - 60;
		}
		else
		{
			minute = 0;
			second = AS + BS;
		}
		if ((AM + BM) >= 60)
		{
			hour = 1;
			minute = minute + AM + BM - 60;
		}
		else
		{
			hour = 0;
			minute = minute + AM + BM;
		}
		hour = AH + BH + hour;
		cout << hour << ' ' << minute << ' ' << second << endl;
		flag++;
	}
    return 0;
}

