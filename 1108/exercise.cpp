// exercise.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include<iostream>
#include<string>
using namespace std;


//CodeForces - 443A
//���⣺ͳ���������ж��ٲ�ͬ����ĸ
//int main()
//{
//	string s;
//	getline(cin, s);
//	int len = s.length();
//	int i;
//	int alpha[26] = { 0 };
//	for (i = 1; i < len - 1; i += 3)
//	{
//		alpha[s[i] - 'a']++;
//	}
//	int num = 0;
//	for (i = 0; i < 26; i++)
//	{
//		if (alpha[i])
//			num++;
//	}
//	cout << num << endl;
//	system("pause");
//	return 0;
//}
//

//CodeForces - 445A
//���⣺�������зźڰ����ӣ�Ҫ��ڰ����Ӳ������ڣ���-�������ܷ����ӣ������-��
//˼·�����������е�ÿһ���㣬�����ǹ̶������ֶ�һ�޶��ģ����ڵ��������ӣ�һ������i���1����������j���1��������ڵ����ӣ�i + j����һ�����1��
//		������������λ�ӵ�(i + j) % 2ֵ�Ĳ�ͬ�����Խ����ڵ�����Ϳ�ɲ�ͬ��ɫ��
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	char a[105][105];
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j] == '.' && ((i + j) % 2 == 0))
//				a[i][j] = 'B';
//			else if (a[i][j] == '.' && ((i + j) % 2 == 1))
//				a[i][j] = 'W';
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		cout << endl;
//		for (j = 1; j <= m; j++)
//		{
//			cout << a[i][j];
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}


//CodeForces - 440A 
//���⣺һ��n����Ŀ��������һ��������n-1����Ŀ����û���Ľ�Ŀ����һ��
//int main()
//{
//	int n;
//	cin >> n;
//	int s[100005] = { 0 };
//	int a;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a;
//		s[a] = 1;
//	}
//	for(int i=1;i<=n;i++)
//		if (s[i] != 1)
//		{
//			cout << i;
//			break;
//		}
//	cout << endl;
//	//system("pause");
//	return 0;
//}

//CodeForces - 447A 
//���⣺����n����������Щ����pȡģ�Ľ����һ���ظ��ǵڼ����������û���ظ������-1��
//int main()
//{
//	int p, n;
//	cin >> p >> n;
//	int i = 0;
//	int x;
//	int hash[305] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		cin >> x;
//		x %= p;
//		if (hash[x])
//		{
//			cout << i+1 << endl;
//			system("pause");
//			return 0;
//		}
//		hash[x]++;
//	}
//	cout << -1 << endl;
//	system("pause");
//	return 0;
//}

//CodeForces - 444A
//���⣺����һ��ͼ��ͼ�е�ÿ���ڵ㣬ÿ���߶���һ��Ȩֵ�����ڴ�������һ����ͼ
//	   ����ͼҪ����ͨ�����ұ�ѡ�е��������㣬������ڱߣ���һ��Ҫ��ѡ�У������ܶ�������ͼ���ܶȡ�
//		�ܶ������е��Ȩֵ��/���бߵ�Ȩֵ�ͱ�ʾ
//˼·���ܶ�������ͼһ��ֻ�������㣬����������καߣ��ܶȶ��ᱻ���͡�
//֤��������һ��ͼ������������ ��ȨΪv1��v2������֮�������ıߵı�ȨΪm1����ͼ���ܶ�Ϊ(v1 + v2) / m1��
//		�������һ����v3Ҫ�ø�ͼ���ܶ����ӣ���v3��v2�����ıߵı�ȨΪm2��
//		��ôֻ����v3 / m2>(v1 + v2) / m1����ͼ���ܶȲŻ����ӡ�
//		���Ǵ�ʱ��v2��v3�����㹹�ɵ���ͼ���ܶ�Ϊ��v2 + v3) / m2>(v1 + v2 + v3) / (m1 + m2)�����ܶ�������ͼһ��ֻ�������㣬�ҵ������㹹�ɵ��ܶ�������ͼ��

//double node[505] = { 0 };
//double edge[505][505] = { 0 };
//double ans[505][505] = { 0 };
//int main()
//{
//	int n, m;//n��ʾ�ڵ����m��ʾ����
//	//�ڶ��������n������ʾn���ڵ��ֵ
//	//��������m�����֣�ÿ�а���3�����֣�a��b��c��ʾ�����ߵ������ڵ���a��b��ֵΪc
//	cin >> n >> m;
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> node[i];//�洢�ڵ�nodeֵ
//	}
//	for (i = 1; i <= m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		cin >> edge[a][b];//ÿ��edge��ֵ
//	}
//	double max = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (edge[i][j] == 0)
//				continue;
//			else
//				ans[i][j] = (node[i] + node[j]) / edge[i][j];
//			max = max > ans[i][j] ? max : ans[i][j];
//		}
//	}
//	printf("%.15lf\n",max);
//	//system("pause");
//	return 0;
//}


//CodeForces - 441A
//���⣺��n���Ŷ����ң���i��������ki���Ŷ�Ҫ������
//		��ǰ֪����i�����ҵĵ�j���Ŷ��������۸�ΪSij��һ���˺�n�����ҵĹ�ϵ���ȽϺã�
//		���ǳ�ȷ��ֻҪ�����۸��ڵ�i�����ҵĹŶ�֮һ�ĵ�ǰ�۸񣬵�i�����Ҿͻ�������Э�顣
//		�����ҵ��ǣ���ǰ������ֻ��v��λ��Ǯ�ˣ��ʣ�����ǰ�ܺͼ������Ҵ��Э�飬�ֱ����ļ���(���Ұ��ձ�ų��������и���)��
//˼·����ģ��һ�¼��ɡ�
//		����ǰǮ�����i�����ҵ����йŶ������۸���бȽϣ�һ�����ֵ�ǰǮ�����ڹŶ������۸�������
//		�ͼ�¼���Ժ͸����Ҵ��Э���ˣ�Ȼ����һ�������¼������Ϣ�������±��ʾ���Ҹ���������Ԫ�ر�ʾ���ұ�š�
//		�����������ҹŶ������۸񶼱Ƚ����ˣ�ֱ�������������±꣬Ȼ��˳�������¼���ұ�ŵ�����Ԫ�ؼ��ɡ�
//int main()
//{
//	int n, money;//����������������ܹ��ʽ���
//	cin >> n >> money;
//	int i, j;
//	int seller[55][55] = { 0 };
//	int ans[55] = { 0 };//��ans���±��ʾ�ܹ���������Ʒ���������������Ԫ�����ݱ�ʾ���ҵľ������
//	int max = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int num;
//		cin >> num;//Ҫ����Ʒ�ļ���
//		bool flag = false;
//		for (j = 1; j <= num; j++)
//		{
//			cin >> seller[i][j];//ÿһ����Ʒ�ļ۸�
//			if (money > seller[i][j] )//��ʾ���Թ���
//			{
//				flag = true;
//			}
//		}
//		if (flag)
//		{
//			ans[max++] = i;
//		}
//	}
//	cout << max << endl;
//	for (i = 0; i < max; i++)
//	{
//		cout << ans[i] << ' ';
//	}
//	cout << endl;
//	//system("pause");
//	return 0;
//}

//int main()
//{
//	int n, money;
//	cin >> n >> money;
//	int count = 0;
//	int ans[55] = { 0 };
//	int i, j;
//	int num;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> num;
//		while (num--)
//		{
//			int temp;
//			bool flag = false;
//			cin >> temp;
//			if (money > temp)
//			{
//				flag = true;
//			}
//			if (flag)
//			{
//				ans[count++] = i;
//			}
//		}
//	}
//	cout << count << endl;
//	for (i = 0; i < count; i++)
//	{
//		if (i == count-1)
//			cout << ans[count-1] << endl;
//		else
//			cout << ans[i] << ' ';
//	}
//	//system("pause");
//	return 0;
//}



//CodeForces - 446A 
//���⣺����һ������A��Ҫ���������A�����ҵ�һ�������Ӵ���
//		ʹ������Ӵ����Խ�������ĳ��Ԫ���޸�Ϊ����ֵȻ��õ�һ���ϸ񵥵����������У����������Ӵ���Ƕ��١�
//

int main()
{
	int n;
	int num[100005] = { 0 };
	int flag;
	int count;
	cin >> n;
	int i,j;
	for (i = 1; i <= n; i++)
	{
		cin >> num[i];
	}
	for (i = 1; i < n; i++)
	{
		flag = 0;
		count = 0;
		for (j = i + 1; j <= n; j++)
		{
			if (num[i] > num[j])
				flag++;
			if (flag == 2)
			{
				break;
			}
			count++;
		}
		if (count == (n - i ))
		{
			cout << count+1 << endl;
			break;
		}
	}
	system("pause");
	return 0;
}