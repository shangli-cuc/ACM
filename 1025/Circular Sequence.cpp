// Circular Sequence.cpp : �������̨Ӧ�ó������ڵ㡣
//

//G�⣺UVA 1584 Circular Sequence 
//��Ŀ��˼������һ��ѭ��DNA���е���һ���Ա�ʾ��ѭ������û�취�洢�����Կ��Դ�����λ�öϿ������Դ洢��ʾ����
//�����������ѭ��DNA���е���С�ֵ����ʾ
//����˼·���ҵ����ѭ��DNA���а���˳ʱ�뷽�������λ�öϿ��������������У��Ƚ���Щ�������е��ֵ���
//�ҵ���С�ֵ������

#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int func(string s,int i,int place)
{
	int len = s.length();
	for (int j = 0; j < len; j++)
	{
		if (s[(i + j) % len] < s[(place + j ) % len])
			return 1;
		else if(s[(i + j) % len] > s[(place + j) % len])
			return 0;
	}
	return 1;
}
int main()
{
	int T;
	cin >> T;
	cin.ignore();
	while (T--)
	{
		string s;
		int i;
		cin >> s;
		int len = s.length();
		int place = 0;
		for (i = 1; i < len; i++)
		{
			if (func(s, i,place))
				place = i;
		}
		for (i = 0; i < len; i++)
		{
			cout << s[(place + i) % len];
		}
		cout << endl;
	}
    return 0;
}

