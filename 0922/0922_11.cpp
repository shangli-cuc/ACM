// 0922_11.cpp : �������̨Ӧ�ó������ڵ㡣
//ͳ��Ԫ��
//ͳ��ÿ��Ԫ����ĸ���ַ����г��ֵĴ�����
//�����������Ȱ���һ������n����ʾ����ʵ���ĸ�����Ȼ����n�г��Ȳ�����100���ַ�����

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

