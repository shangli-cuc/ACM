// HDU-2057.cpp : 定义控制台应用程序的入口点。
//题意：给定两个16进制的数，以16进制输出它们的和
/*
输入：
+A -A
+1A 12
1A -9
-1A -12
1A -AA
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long long x, y;
	while (cin >> hex >> x  >> y && x != EOF)
	{
		long long sum = x + y;
		if (sum < 0)
		{
			sum = -sum;
			cout << "-" << setiosflags(ios::uppercase) << hex << sum << endl;
		}
		else
		{
			cout << setiosflags(ios::uppercase) << hex << sum << endl;
		}
	}
	//system("pause");
    return 0;
}

