// 0920_4.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;


int main()
{
	int x;
	while (cin >> x)
	{
		if (x > 100 || x < 0)
			cout << "Score is error!" << endl;
		else if (x > 90)
			cout << "A" << endl;
		else if (x > 80)
			cout << "B" << endl;
		else if (x > 70)
			cout << "C" << endl;
		else if (x > 60)
			cout << "D" << endl;
		else
			cout << "E" << endl;
	}
    return 0;
}

