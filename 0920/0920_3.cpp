// 0920_3.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;


int main()
{
	double r, result;
	const double pi = 3.1415927;
	while (cin >> r)
	{
		result = (4.0 / 3)*pi*pow(r, 3);
		printf("%.3f\n", result);
	}
    return 0;
}

