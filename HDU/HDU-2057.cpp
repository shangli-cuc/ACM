// HDU-2057.cpp : �������̨Ӧ�ó������ڵ㡣
//���⣺��������16���Ƶ�������16����������ǵĺ�
/*
���룺
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

