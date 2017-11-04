// Hangman Judge.cpp : �������̨Ӧ�ó������ڵ㡣
//uva 489 Hangman Judge 
//��Ŀ��˼������һ��a-z��ɵ���ĸpuzzle����£�����¶������е�ĳһ����ĸ����puzzle�ж�Ӧ�����и���ĸ������֡�
//          ����´��������һ���������֡����ϻ���һ�ʣ�����������֡���7�ʾͿ��Ի��ꡣ����µ���󡰹����֡���û������������ĸ�����¶�����Ӯ������������ʽ���You win��
//          ����µ���󡰹����֡��������������䣬����������ʽ���You lose������µ�����û����Ҳû�������������ˣ�����������ʽ���You chickened out��
//����˼·����һ����ĸ����chAppear[26]����ʾpuzzle����26����ĸ�Ƿ���ֹ����߱��¹���0��ʾû�г��ֹ���1��ʾ����ĸ���ֹ���2��ʾ����ĸ�������ұ��¹���������ͳ��puzzle���ܹ��м�����ͬ����ĸ��Ҫ�²�cnt
//          Ȼ�����guess���鲢����guess�����ֵ�����guess�����Ӧ����ĸ��Ӧ��chAppearֵΪ1����ʾ�¶����Ҹ���ĸû�б��¹�����Ӧ��chAppearֵ��Ϊ2��������Ҫ�²����ĸ��cnt��һ�����cntΪ0����ʾȫ���¶����Ӯ��
//          ���guess�����Ӧ����ĸ��Ӧ��chAppearֵ��Ϊ1�����ʾҪ���ظ��²��˻��߲´��ˣ���ô�������֡������1�ʣ�����Ѿ��ﵽ7�����䣻
//          ������е�guess��ĸ����������cntҲû��Ϊ0���ߡ������֡���û����ӵ�7�ʣ����������

#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	while (cin >> n && n != -1)
	{
		string s, guess;//�����С��²�����
		cin >> s >> guess;
		int s_alpha[26] = { 0 }, guess_alpha[26] = { 0 };//����������Щ��ĸ���и���ĸ��ֵ1
		int len_s = s.length(), len_guess = guess.length();//���г���
		int i;
		int num_s = 0, num_guess = 0;//�������м�����ĸ
		for (i = 0; i < len_s; i++)
		{
			if (s_alpha[s[i] - 'a'] == 0)
			{
				num_s++;
				s_alpha[s[i] - 'a'] = 1;
			}
		}
		int num_count = 0;//�²����������7��lose
		for (i = 0; i < len_guess; i++)
		{
			if (s_alpha[guess[i] - 'a'] == 1)
			{
				s_alpha[guess[i] - 'a'] = 2;//�²����д��ڸ���ĸ����ֵ2��ʾ�Ѳ²��
				num_s--;//��Ҫ�²����ĸ��1
			}
			else
				num_count++;

			if (num_count == 7)
			{
				cout << "Round " << n << endl;
				cout << "You lose." << endl;
				break;
			}
			if (num_s == 0)
			{
				cout << "Round " << n << endl;
				cout << "You win." << endl;
				break;
			}
		}
		if (num_s != 0 && num_count != 7)
		{
			cout << "Round " << n << endl;
			cout << "You chickened out." << endl;
		}
	}
    return 0;
}

