// Cyclic Shift.cpp : �������̨Ӧ�ó������ڵ㡣
//codeforces 745A Hongcow Learns the Cyclic Shift  
//��Ŀ��˼����һ������ѧϰ�µĵ��ʣ�����һ�����ʵ��ַ�������������ַ�������ѭ���ƶ��ܹ��������ٸ��µĵ���
//����˼·�����ַ�����initStr�����ַ��������ö�ά����strVec�洢���ַ���ѭ���ƶ�����ͬ��ֵ,��initStr����strVec��
//          Ȼ��Ը��ַ���ѭ���ƶ��ַ������ȼ�1�Σ�ÿ���ƶ�֮���ж��ƶ�����ַ����Ƿ���strVec�У�
//          ����Ѿ�����˵�����ظ��ַ��������������������strVec�С�������strVec�Ĵ�С

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	char s[55], s_copy[55][55] = {'0'};
	cin >> s;
	int num = 1;
	memcpy(s_copy[num], s, sizeof(s));
	int len = strlen(s);
	int i, j;
	int flag = len-1;
	while(flag--)
	{
		for (i = len - 1; i >= 0; i--)
		{
			s[i + 1] = s[i];
		}
		s[0] = s[len];
		s[len] = '\0';

		for (i = 1; i <= num; i++)
		{
			int k = 0;
			for (j = 0; j < len; j++)
			{
				if (s_copy[i][j] != s[j])
					break;
				else
					k++;
			}
			if (k == len)
				break;
		}
		if (i > num)
		{
			num++;
			memcpy(s_copy[num], s, sizeof(s));
		}
	}
	cout << num << endl;
    return 0;
}

