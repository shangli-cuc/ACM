// CodeForces - 430A.cpp : �������̨Ӧ�ó������ڵ㡣
//��Ŀ���⣺�������ϸ���n���㣬m���߶Σ����������߶�i������j����li<=j<=ri��
//��˵����j���߶�i�ϡ�Ҫ�������ĵ����Ⱦɫ��ʹ�ö�������һ���߶Σ��������߶��ϵĺ�ɫ����ri����ɫ����bi������|ri-bi|<=1��
//�����������߶���Σ�ֻҪ�㰴�ա�0101010���������ַ����������һ����ɡ�
//���Ҫ��������ʱ��˳��������߶�ʲô�Ĳ��ÿ��ǡ�



#include<iostream>
#include<algorithm>
using namespace std;
const int N = 110;
struct point
{
	int x; 
	int id;
}pt[N];
bool cmp(point a ,point b)
{
	return a.x < b.x;
}
int main()
{
	int n, m;
	cin >> n >> m;
	int i;
	int ans[N];
	for (i = 0; i < n; i++)
	{
		cin >> pt[i].x;
		pt[i].id = i;
	}
	sort(pt, pt + n, cmp);//sort()�����Խṹ������cmp��ʾ�������봫��
	int right, left;
	for (i = 0; i < m; i++)//�߶����뿼��
		cin >> right >> left;

	for (i = 0; i < n; i++)
	{
		ans[pt[i].id] = i % 2;
	}

	cout << ans[0];
	for (i = 1; i < n; i++)
		cout << ' ' << ans[i];
	cout << endl;
	//system("pause");
    return 0;
}

