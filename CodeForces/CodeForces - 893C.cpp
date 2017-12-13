// CodeForces - 893C.cpp : �������̨Ӧ�ó������ڵ㡣
//���⣺���������ÿһ���ˣ�������֮���൱�������������е�����(˫���)�������ٶ���Ǯ�������������ˡ�
//����˼·�����͵Ĳ��鼯

#include<iostream>
#include<algorithm>
using namespace std;

long long father[100005];
long long getfather(long long x)//Ѱ�Ҹ���
{
	if (x == father[x])
	{
		return father[x];
	}
	else
	{
		father[x] = getfather(father[x]);
		return father[x];
	}
	//�����õ���·��ѹ����ʹ�����еĴ�����ϵֻ������
	//if (x != father[x])//x�ĸ��������Լ�����
	//	father[x] = getfather(father[x]);//��x�����ĸ��������ĸ�������x��ֱ�Ӹ���
	//return father[x];
}
void join(long long a, long long b)//��ab��������������취����b�ĸ�����a�����ĸ��������߷�����Ҳ��
{
	long long father_a, father_b;
	father_a = getfather(a);
	father_b = getfather(b);
	if (father_a != father_b)
		father[father_a] = father_b;
}
int main()
{
	long long n, m;
	cin >> n >> m;
	long long i, a[100005];
	for (i = 1; i <= n; i++)//�൱�ڳ�ʼ����������father
		father[i] = i;//father[i]�洢����i�ĸ�������ʼĬ���Ǳ���
	for (i = 1; i <= n; i++)//��������ÿ������Ҫ�Ľ�Ǯ��
		cin >> a[i];
	for (i = 1; i <= m; i++)
	{
		long long a, b;
		cin >> a >> b;
		join(a, b);
	}
	for (i = 1; i <= n; i++)
	{
		a[getfather(i)] = min(a[getfather(i)], a[i]);//a[i]������i�Ļ߽�a[father[i]]�����i������Ҫ�Ļ߽𣬴�����ѡ����С�ģ���С����洢����㸸����a[i]
	}
	long long sum = 0;
	for (i = 1; i <= n; i++)
	{
		if (i == getfather(i))//��⵽i�ĸ�����������Ҳ����˵�ҵ��˶��㸸������Ϊֻ������ṹ
			sum += a[i];
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}