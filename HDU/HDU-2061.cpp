// HDU-2061.cpp : �������̨Ӧ�ó������ڵ㡣
/*
��Ŀ���⣺ѧУ��(ÿ�ſε�ѧ��*�õ��ķ���)���ܺ�/��ѧ�֣�����ƽ���֡�����пγ̲���60�֣��Ͳ�����ƽ�����ˡ�
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int m, i;
		cin >> m;
		char course_name[33];
		double credit, grades, sum = 0, sum_credit = 0;
		bool flag = true;
		for (i = 0; i < m; i++)
		{
			cin >> course_name >> credit >> grades;
			if (grades < 60)
			{
				flag = false;
			}
			sum += (credit*grades);
			sum_credit += credit;
		}
		if (flag)
		{
			printf("%.2f\n", sum / sum_credit);
		}
		else
		{
			cout << "Sorry!" << endl;
		}
		if (n)
			cout << endl;
	}
	system("pause");
    return 0;
}

