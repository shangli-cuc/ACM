// HDU-2061.cpp : 定义控制台应用程序的入口点。
/*
题目大意：学校按(每门课的学分*得到的分数)的总和/总学分，计算平均分。如果有课程不到60分，就不计算平均分了。
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

