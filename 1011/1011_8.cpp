// 1011_8.cpp : �������̨Ӧ�ó������ڵ㡣
//Repeating Decimals
//������������a��b��0<=a<=3000,1<=b<=3000�������a/b��ѭ��С����ʾ�Լ�ѭ���ڳ��ȣ�
//���磺a=1��b=250��С����ʾΪ0.004(0),ѭ���ڳ���Ϊ1��
//a=5,b=43,С����ʾΪ0.(116279069767441860465)��ѭ���ڳ���Ϊ21��

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b;
	int m;//��¼����
	int result[3005];
	int loopPos;
	int remainder[3005];
	int remLength;
	while (cin >> a >> b &&a != EOF &&b != EOF)
	{
		if (a < 0 || a>3000 || b < 1 || b>3000)
			break;
		//memset(result, 0, sizeof(result));
		result[3005] = { 0 };
		//memset(remainder, -1, sizeof(remainder));
		for (int i = 0; i < 3005; i++)
			remainder[i] = -1;
		loopPos = 0;
		remLength = 0;
		printf("%d/%d = %d.", a, b,a/b);
		m = a%b;//��������
		while (true)
		{
			if (m == 0)//������û������
			{
				for (int i = 0; i < remLength; i++)
					cout << result[i];
				cout << "(0)" << endl<< "   " << "1 = number of digits in repeating cycle" 
					<< endl << endl;
				break;
			}
			for (int i = 0; i < remLength; i++)//����õ���������֮ǰ��ĳ��������ȣ���ʾ�ҵ�ѭ����
			{
				if (m == remainder[i])
				{
					loopPos = i;
					break;
				}
			}
			if (m == remainder[loopPos])
			{
				for (int i = 0; i < remLength; i++)
				{
					if (i == loopPos)
						cout << "(";
					cout << result[i];
					if (i - loopPos >= 49)
					{
						cout << "...";
						break;
					}
				}
				cout << ")" << endl << "   " << remLength-loopPos
					<<" = number of digits in repeating cycle" << endl << endl;
				break;
			}
			remainder[remLength] = m;//�������
			result[remLength] = 10 * m / b;//���С�����ֽ��
			remLength++;
			m = 10 * m%b;

		}
	}
}

