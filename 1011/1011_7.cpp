// 1011_7.cpp : �������̨Ӧ�ó������ڵ㡣
//Master-Mind Hints
//����������(��Ϊ1��9������)���û��µ����У�ͳ���ж������ֲ¶���λ����ȷ��A��ǿƥ�䣩��
//�ж����������������ж����ֹ���λ�ò��ԣ�B����ƥ�䣩��
//�����������������ݣ�ÿ��������������һ��Ϊ���г���N���ڶ����Ǵ����У�
//�������������в������У���������ȫ0�Ǳ�ʾ�������ݽ�����NΪ0ʱ�������

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	int j = 1;
	while (cin >> n &&n != 0&&n!=EOF)
	{
		int s[1005], a[1005];//�����У��²�����
		for (int i = 1; i <= n; i++)
			cin >> s[i];
		cout << "Game " << j << ":" << endl;
		while (true)
		{
			for (int i = 1; i <= n; i++)
				cin >> a[i];
			if (a[1] == 0)
				break;
			int num_A = 0;
			int A[10] = { 0 }, B[10] = { 0 };
			for (int i = 1; i <= n; i++)
			{
				if (s[i] == a[i])
					num_A++;//���ǿƥ��ĸ���
			}
			int num_B = 0;
			for (int i = 1; i <= n; i++)
			{
				A[s[i]]++;//��Ŵ�������1~9���ֵĸ���
				B[a[i]]++;//��Ų²�������1~9���ֵĸ���
			}
			for (int i = 1; i <= 9; i++)
			{
				if (A[i] >= B[i])
					num_B += B[i];
				else
					num_B += A[i];
			}
			num_B -= num_A;
			cout << "	(" << num_A << "," << num_B << ")" << endl;
		}
		j++;
	}
    return 0;
}

