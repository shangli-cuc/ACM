// 1006_6.cpp : �������̨Ӧ�ó������ڵ㡣
//��ŵ��֮��
//�ı���Ϸ���򣺹涨����ֱ�ӽ����Ӵ������ң�ֱ���ƶ������ң��󣩣����뾭���м��ת��

#include<iostream>
using namespace std;


////////////////////////������岽��Ĵ���////////////////////////
/*
char from = 'A', to = 'C', other = 'B';
long long num;

void hanoi2(int n, char from, char to)
{
	if (n == 1)
	{
		cout << from << "->" << to << endl;
		num++;
	}
}
void hanoi3(int n,char from,char other,char to)
{
	if (n == 1)
	{
		cout << from << "->" << other << "->" << to << endl;
		num += 2;
	}
	else
	{
		hanoi3(n - 1, from, other,to);//n-1�����Ӵ�A�ŵ�B�ٷŵ�C
		hanoi2(1, from, other);//���һ�����Ӵ�A�ŵ�B
		hanoi3(n - 1, to, other,from);//n-1�����Ӵ�C�ŵ�B�ٷŵ�A
		hanoi2(1, other, to);	//���һ�����Ӵ�B�ŵ�C
		hanoi3(n - 1, from, other,to);	//n-1�����Ӵ�A�ŵ�B�ٷŵ�C
	}
}
*/

///////////////////����ƶ����������Ĵ���//////////////////
int main()
{
	int n;
	while (cin >> n && n != EOF)
	{
		long long step[100];
		step[1] = 1;//��1�������ƶ����Աߵ���������Ҫ1��
		//num = 0;
		if (n < 1 || n>35)
			break;
		//hanoi3(n,from,other,to);
		//cout << num << endl;
		for (int i = 2; i < 100; i++)
		{
			step[i] = 3 * step[i-1] + 1;//��n-1�������ƶ����Աߵ�������Ҫ
			//step[n-1]������ô��n�������ƶ����Աߵ�������Ҫ��step[n]��֪
		}
		cout << 2*step[n] << endl;//��n�����Ӵ�A�ƶ���C�Ĳ���
	}
    return 0;
}

