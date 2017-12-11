// HihoCoder - 1135.cpp : �������̨Ӧ�ó������ڵ㡣
//���⣺����һ���ַ����У�ÿ���ַ���ʾ��Ӧ��ɫ���󱻷������ӣ�
//��������ɫ����ĸ�����ľ���ֵ���ڸ�������ʱ��������ǰ�����ڵ�������������ĸ������ʱ�м�����
/*
������ģ����ü��ɣ�ÿ����һ�������һ�μ��
ע����Ŀ����Ǻ��������ӵ�й����ٸ���
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main()
{
	int result[3], i, j;
	for (i = 0; i < 3; i++)//����x��y��z
		cin >> result[i];
	sort(result, result + 3);//����
	string s;
	cin >> s;
	int len = s.length(),red = 0, yellow = 0, blue = 0;
	int num[3], count = 0, ans = 0;
	for (i = 0; i < len; i++)
	{
		switch (s[i])
		{
		case 'R':
			red++;
			break;
		case 'Y':
			yellow++;
			break;
		case 'B':
			blue++;
			break;
		}
		bool flag = true;
		count++;
		ans = count > ans ? count : ans;
		num[0] = abs(red - yellow);
		num[1] = abs(red - blue);
		num[2] = abs(yellow - blue);
		sort(num, num + 3);//����
		for (j = 0; j < 3; j++)
		{
			if (num[j] != result[j])//û�з���ƥ�䣬ֱ���������
			{
				flag = false;
				break;
			}
		}
		if (flag)//�൱����������ƥ����
		{
			red = 0; yellow = 0; blue = 0; count = 0;
		}
	}
	cout << ans << endl;
	//system("pause");
    return 0;
}

