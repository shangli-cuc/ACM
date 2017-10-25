// FloatingPointNumbers.cpp : �������̨Ӧ�ó������ڵ㡣
//Floating-Point Numbers
//��������ý���-β���ķ������渡�������������������6λ��β����8β������Ա�����󸡵���Ϊ0.111111111(������)*2^(111111Ϊ������)��
//��ΪҪ��С������һλ����Ϊ1�����һ����9λС������������ʮ����֮��ͱ�Ϊ0.998046875*2^63 = 9.205357638345294*10^18��
//���ڸ���һ��ʮ���Ʊ�ʾ����󸡵���AeB(0<A<10)��Ҫ����������λ��E��β����λ��M( 0<=M<=9, 1<=E<=30 )��

#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;


int main()
{
	long long E[10][31];//�洢��������
	double M[10][31];//�洢С������
	double m,e,t;//m*2^e
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j <= 30; j++)
		{
			m = (1 - pow(2, -1-i));//β������
			e = pow(2, j) - 1;//��������
			t = log10(m) + e*log10(2);
			E[i][j] = floor(t);//��������
			M[i][j] = pow(10, t- E[i][j]);//С������
		}
	}
	//log(m*2^e)=log(A*10^B)
	//logm+e*log2=logA+B=t;
	//t����������ΪB��С������ΪlogA
	//B=floor(t),A=10^(t-B)
	string s;
	while (cin >> s && s != "0e0")
	{
		for (string::iterator iter = s.begin(); iter != s.end(); iter++)
		{
			if (*iter == 'e')
			{
				*iter = ' ';
				break;
			}
		}
		stringstream ss;
		ss << s;
		double A, B;
		ss >> A >> B;
		if (A < 1)
		{
			A *= 10;
			B -= 1;
		}
		for(i=0;i<=9;i++)
			for (j = 1; j <= 30; j++)
			{
				if (B == E[i][j] && (fabs(A - M[i][j])<1e-4))
				{
					cout << i << ' ' << j << endl;
					break;
				}
			}
	}
	system("pause");
    return 0;
}

