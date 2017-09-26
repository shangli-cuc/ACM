// 0922_11.cpp : 定义控制台应用程序的入口点。
//统计元音
//统计每个元音字母在字符串中出现的次数。
//输入数据首先包括一个整数n，表示测试实例的个数，然后是n行长度不超过100的字符串。

#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int flag = 1;
	while (flag<=n)
	{
		char s[100];
		int i;
		cin >> s;
		int len = strlen(s);
		if (len > 100)
			break;
		int num_a, num_e, num_i, num_o, num_u;
		num_a = num_e = num_i = num_o = num_u = 0;
		for (i = 0; i < len; i++)
		{
			switch (s[i])
			{
			case 'a':
				num_a++;
				break;
			case 'e':
				num_e++;
				break;
			case 'i':
				num_i++;
				break;
			case 'o':
				num_o++;
				break;
			case 'u':
				num_u++;
				break;
			}
		}
		cout << "a:" << num_a << endl << "e:" << num_e << endl << "i:" << num_i << endl
			<< "o:" << num_o << endl << "u:" << num_u << endl;
		if (flag < n)
			cout << endl;
		flag++;
	}
    return 0;
}

