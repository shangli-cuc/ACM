//UVA 1583 Digit Generator
//���⣺ÿ����M���Բ���һ���µ���N��N����M�������ĸ�λ����֮�ͣ�����216���Բ���216+2+1+6=225��
//      ��ô����һ����N������Generator������ǰ���������N������Ϊ�������Generator�����ܻ��ж��Ҳ����û�У�
//      ����216��Generator������198��207�����ڸ���һ����N��������������СGenerator�����û�о����0
//����˼·�������������N��1<=N<=100 000)��λ��digitNum��������Generator�϶���[N-digitNum*9��N]֮�����
//         ����Ϊ���ĸ�λ���϶�С�ڵ���9����ö�������������֣��ҵ��������Сֵ��û�ҵ����0

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
		int len = stringN.length();//N��λ��

		stringstream ss;//����ת��stringN��longN������
		ss << stringN;
		long long longN;
		ss >> longN;//����ת��

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