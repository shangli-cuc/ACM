// KickDown.cpp : �������̨Ӧ�ó������ڵ㡣
//���������ȷֱ�Ϊn1, n2��n1, n2 <= 100����ÿ�и߶�ֻΪh����2h�ĳ������֡�
//��Ҫ�����ǶԿ۷���һ���߶�Ϊ3h�������У����ܹ��������ǵ������������
//����master��driven�������ָ�λ���ϵĸ߶ȣ�Ȼ������driven��master�ĵ�i��λ�ÿ�ʼ��driven�ܷ��master��0��ʼ��λ�ö�Ӧƥ����߶Ȳ�����3h�����һֱ����һ���ֽ�������ƥ����õ���������̳��ȣ�
//Ȼ������ͬ���ķ�����master��drivenȥƥ�䣨��Ӧƥ��ķ���һ�����ҵ���������µ�����������ȣ�����������õ��������������ȡ��Сֵ��Ϊ��



#include<iostream>   
#include<algorithm>  
#include<string>  
using namespace std;
int main()
{
	string master, driven;//����ĺ�����ĳ���
	while (cin>>master>>driven)
	{
		int len_m = master.length();
		int len_d = driven.length();
		int i, j;
		int ok;
		int num = len_d + len_m;
		for (i = 0; i < len_d; i++)//drivenȥƥ��master
		{
			int k = i;
			ok = 1;
			for (j = 0; j < len_m; j++)
			{
				if (k<len_d &&driven[k++]=='2' &&master[j]=='2')
				{
					ok = 0;
					break;
				}
			}
			if (ok)//��ʾdriven���±�i����masterƥ��,iΪƥ�����ʼ��
			{
				num = min(num,max(len_d,len_m+i));
				break;
			}
		}
		for (i = 0; i < len_m; i++)//master��ƥ��driven
		{
			int k = i;
			ok = 1;
			for (j = 0; j < len_d; j++)
			{
				if (k < len_m && master[k++] == '2'&&driven[j] == '2')
				{
					ok = 0; 
					break;
				}
			}
			if (ok)
			{
				num = min(num, max(len_d + i, len_m));
				break;
			}
		}
		cout << num << endl;
	}
    return 0;
}

