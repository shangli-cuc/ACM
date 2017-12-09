// HihoCoder - 1631.cpp : �������̨Ӧ�ó������ڵ㡣
//����m���㣬nֻè��x���Ӻ�ÿֻè��һ����ķ�����
//���p��q��ʾ����x���Ӻ�ʣ��p�����������q������������

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int m, n, x;//m���㣬nֻè��x����
	int i, cat[105], eat[105];
	while (cin >> m >> n >> x && m!=EOF )
	{
		memset(eat, 0, sizeof(eat));
		for (i = 1; i <= n; i++)
			cin >> cat[i];
		sort(cat, cat + n+1);
		int count = 0;
		while (x--)
		{
			for (i = 1; i <= n; i++)
			{
				if (eat[i] == 0 && m)
				{
					eat[i] = cat[i];
					m--;
				}
			}
			for (i = 1; i <= n; i++)
			{
				if (eat[i])
					eat[i]--;
			}
		}
		for (i = 1; i <= n; i++)
		{
			if (eat[i])
				count++;
		}
		cout << m << ' ' << count << endl;
	}

	//system("pause");
    return 0;
}

