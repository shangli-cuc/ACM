// 1006_10.cpp : �������̨Ӧ�ó������ڵ㡣
//�������(�������㷨)�����˺þ�...��
//�������ݵĵ�һ������������K, M, N���ֱ��ʾ���ܵ������Ŀ��Ů����������������������0<K <= 1000
//1 <= N ��M <= 500.��������K�У�ÿ������������
//�ֱ��ʾŮ��AiԸ�������Bj��partner�����һ��0��������
//������ƥ����
//�������㷨��Ѱ������·���������ͼƥ�䣬�ﵽ����ƥ�䣬�����ƥ�䣬��ȫƥ��
#include<iostream>
using namespace std;

const int max = 501;
int map[max][max];
int vis[max];
int boy[max];
//int i, j;�����i��j�����ȫ�ֱ��������ճ����У�����OJ��WA
int k, m, n;

int find(int girl)
{
	for (int j = 1; j <= n; j++)//���η������е�����
	{
		if (vis[j] == 0 && map[girl][j] == 1)//����������֮ǰû�з��ʹ���������ͬʱŮ�����Ժ��������
		{
			vis[j] = 1;//��ʾ�������Ѿ����ʹ���
			if (boy[j] == 0 || find(boy[j]))//��������û����Ի��߿��Խ��Ѿ���Գɹ�����Ů���²𿪣���Ů�������ҵ��������
			{
				boy[j] = girl;//�к�j��Ů��i��Գɹ�
				return 1;
			}
		}
	}
	return 0;
}


int main()
{
	while (cin >> k && k!=EOF)
	{
		if (k <= 0 || k > 1000)
			break;
		cin >> m >> n;
		if (m > 500 || n < 1)
			break;
		int a, b;
		memset(map, 0, sizeof(map));
		memset(boy, 0, sizeof(boy));
		for (int i = 0; i < k; i++)
		{
			cin >> a >> b;
			map[a][b] = 1;
		}
		/*
		for (i = 1; i <= m; i++)
		{
			cout << endl;
			for (j = 1; j <= n; j++)
				cout << map[i][j]<<" ";
		}
		*/
		int num = 0;
		for (int i = 1; i <= m; i++)
		{
			memset(vis, 0, sizeof(vis));
			if (find(i))
				num++;
		}
		cout << num << endl;
	}
	//system("pause");
    return 0;
}

