// 0920_2.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;


int main()
{
	double x1, x2, y1, y2;
	while (cin >> x1 >> y1 >> x2 >> y2)
	{
		double result;
		result = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		printf("%.2f\n",result);
	}
    return 0;
}

