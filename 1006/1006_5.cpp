// 1006_5.cpp : �������̨Ӧ�ó������ڵ㡣
/*����Ⱦɫ����
* RPG������ɫÿ��Ϳһɫ��Ҫ���κ����ڵķ�����ͬɫ��
* ����β����Ҳ��ͬɫ����ȫ��������Ҫ���Ϳ��
*/

#include<iostream>
using namespace std;


int main()
{
	int n;
	while (cin >> n && n != EOF)
	{
		if (n <= 0 || n > 50)
			break;
		long long s[60] = { 0,3,6,6 };
		for (int i = 4; i < 60; i++)
		{
			s[i] = s[i - 1] + 2 * s[i - 2];
		}
		cout << s[n] << endl;
	}
    return 0;
}

