// CodeForces_787B.cpp : �������̨Ӧ�ó������ڵ㡣
//������Ǹ���n�����棬m��С�飬�����m��ÿ�е�һ��������С���Ա������num��
//Ȼ����Ÿ���ÿ����Ա�����ĸ����򣬻�Ϊ�෴��������һ���������б���һ���Ǻ���һ�����ˣ�
//�����һ��С�����ȫ�ǻ��ˣ�Ҳ����˵�����һ��С����û���෴������ô�����YES����������NO
//����˼·��ֻҪ��һ���������治����ͬһ��������Һ���ͬʱ���֣������ȫ������ͽ��ɵ��飬
//          �����Ҫ�����������ݣ�һ��������ͽ�����YES���Һ���ͬʱ���ֵı�־Ϊ��
//			ͬһ�������д��ھ���ֵ��ȵ����Ų�һ�������ݡ�

#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int mem[10005];
	int flag;
	while (m--)
	{
		flag = 0;
		int num;
		cin >> num;
		int i, j;
		for (i = 0; i < num; i++)
		{
			cin >> mem[i];
		}
		for (i = 0; i < num; i++)
		{
			for (j = 0; j < num; j++)
			{
				if (mem[i] == -mem[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
			break;
	}
	if (!flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	//system("pause");
    return 0;
}
