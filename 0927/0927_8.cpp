// 0927_8.cpp : �������̨Ӧ�ó������ڵ㡣
//������
//���������ߣ������ж�һ���ܲ������һ�������Ρ�
//�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ����������������A,B,C������A,B,C <1000;
//����ÿ������ʵ������������߳�A, B, C����������εĻ������YES������NO��

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		double s[3];
		cin >> s[0] >> s[1] >> s[2];
		if (s[0] >= 1000 || s[1] >= 1000 || s[2] >= 1000)
			break;
		sort(s, s + 3);
		if (s[0] + s[1] > s[2])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

