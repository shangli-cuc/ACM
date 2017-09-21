// 0920_7.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;


int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		if (n < 1 || m>10000)
			break;
		int i,result=1;
		for (i = 0; i < m; i++)
		{
			result = result*n;
			if (result > 1000)
				result = result % 1000;
		}
		cout << result << endl;
	}
    return 0;
}

