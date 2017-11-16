// UVA_10082_VERTYU.cpp : 定义控制台应用程序的入口点。
//UVA 10082：VERTYU
//题意：把手放在键盘上时，稍不注意就会往右错一位。这样，输入Q会变成W，输入J会变成K等。
//      输入一个错位后敲出来的字符串（所有字母均大写），输出打字员本来想打出来的句子。
//      输入保证合法，即一定是错位之后的字符串。
//解题思路：用一个字符数组存储键盘上的所有字符，然后对每个读入的字符，判断它是不是在字符数组中，
//          如果在则输出它前面的字符，否则输出自身（空格和换行符）。

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string alphabet = "1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
	string s;
	while (getline(cin, s) && s[0] != EOF)
	{

		int lenS = s.length(), lenA = alphabet.length();
		int i, j;
		for (i = 0; i < lenS; i++)
		{
			for (j = 0; j < lenA; j++)
			{
				if (s[i] == ' ')
				{
					cout << ' ';
					break;
				}
				else if (s[i] == alphabet[j])
				{
					cout << alphabet[j - 1];
					break;
				}
			}
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}
