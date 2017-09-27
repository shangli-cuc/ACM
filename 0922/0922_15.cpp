// 0922_15.cpp : 定义控制台应用程序的入口点。
//汉字统计
//输入文件首先包含一个整数n，表示测试实例的个数，然后是n段文本。
//对于每一段文本，输出其中的汉字的个数，每个测试实例的输出占一行。
//汉字机内码在计算机的表达方式的描述是，使用二个字节，每个字节最高位一位为1。
//计算机中，补码第一位是符号位，1表示为负数，
//所以汉字机内码的每个字节表示的十进制数都是负数
//统计输入字符串含有几个汉字，只需求出字符串中小于0的字符有几个，将它除以2就得到答案
#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		string s;
		getline(cin, s);
		int len = s.length();
		int i;
		int num = 0;
		for (i = 0; i < len; i++)
		{
			if (s[i] < 0)
				num++;
		}
		cout << num/2<< endl;
	}
    return 0;
}

