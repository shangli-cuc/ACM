// UVA_10082_VERTYU.cpp : �������̨Ӧ�ó������ڵ㡣
//UVA 10082��VERTYU
//���⣺���ַ��ڼ�����ʱ���Բ�ע��ͻ����Ҵ�һλ������������Q����W������J����K�ȡ�
//      ����һ����λ���ó������ַ�����������ĸ����д�����������Ա�����������ľ��ӡ�
//      ���뱣֤�Ϸ�����һ���Ǵ�λ֮����ַ�����
//����˼·����һ���ַ�����洢�����ϵ������ַ���Ȼ���ÿ��������ַ����ж����ǲ������ַ������У�
//          ������������ǰ����ַ���������������ո�ͻ��з�����

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
