//UVA 1583 Digit Generator
//题意：每个数M可以产生一个新的数N，N等于M加上他的各位数字之和，例如216可以产生216+2+1+6=225。
//      那么给定一个数N，他的Generator（按照前述规则产生N的数称为这个数的Generator）可能会有多个也可能没有，
//      例如216的Generator可以是198和207。现在给定一个数N，让你求它的最小Generator，如果没有就输出0
//解题思路：先算出给定的N（1<=N<=100 000)的位数digitNum，则它的Generator肯定在[N-digitNum*9，N]之间产生
//         （因为它的各位数肯定小于等于9），枚举这个区间的数字，找到了输出最小值，没找到输出0

#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string stringN;
		cin >> stringN;
		int len = stringN.length();//N的位数

		stringstream ss;//用于转换stringN和longN的类型
		ss << stringN;
		long long longN;
		ss >> longN;//类型转换

		long long i, j;
		int flag = 0;
		for (i = longN - len * 9; i <= longN; i++)
		{
			stringstream i_number;
			long long sum = i;
			i_number << i;
			string number;
			i_number >> number;
			int len_num = number.length();
			for (j = 0; j < len_num; j++)
			{
				sum += ((int)number[j]) - 48;
			}
			if (sum == longN)
			{
				flag = 1;
				cout << i << endl;
				break;
			}
		}
		if (flag == 0)
		{
			cout << 0 << endl;
		}
	}
	system("pause");
	return 0;
}