// CodeForces - 893A.cpp : �������̨Ӧ�ó������ڵ㡣
//����������ı������ģ������Ľ���
//��ĳһ��ʤ���������Թ��ߣ���˵����¼�������NO������������YES

#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int i, x[105] = { 0 };
	for (i = 1; i <= n; i++)
	{
		cin >> x[i];
	}
	bool flag = true;
	int WaitPerson = 3;
	for (i = 1; i <= n; i++)
	{
//		if (x[i] == WaitPerson)
////��һ�ֱ����涨����3�ȴ����������3Ӯ�ˣ�log�����⣬ͬ���ĺ����������������Ӯ������WaitPersonҲ���д��
//		{
//			flag = false;
//			break;
//		}
//		else 
		if (x[i] == 1)//Ӯ������1
		{
			if (WaitPerson == 1)
			{
				flag = false;
				break;
			}
			else if (WaitPerson == 2)//Ӯ������1���ȴ���ԭ����2�����ڱ��3
			{
				WaitPerson = 3;
			}
			else if (WaitPerson == 3)//Ӯ������1���ȴ���ԭ����3�����ڱ��2
			{
				WaitPerson = 2;
			}
		}
		else if(x[i]==2)//Ӯ������2
		{
			if (WaitPerson == 2)
			{
				flag = false;
				break;
			}
			else if (WaitPerson == 1)//Ӯ������2���ȴ���ԭ����1�����ڱ��3
			{
				WaitPerson = 3;
			}
			else if (WaitPerson == 3)//Ӯ������2���ȴ���ԭ����3�����ڱ��1
			{
				WaitPerson = 1;
			}
		}
		else if (x[i] == 3)//Ӯ������3
		{
			if (WaitPerson == 3)
			{
				flag = false;
				break;
			}
			else if (WaitPerson == 1)//Ӯ������3���ȴ���ԭ����1�����ڱ��2
			{
				WaitPerson = 2;
			}
			else if (WaitPerson == 2)//Ӯ������3���ȴ���ԭ����2�����ڱ��1
			{
				WaitPerson = 1;
			}
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	//system("pause");
    return 0;
}

