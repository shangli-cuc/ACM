// Hangman Judge.cpp : 定义控制台应用程序的入口点。
//uva 489 Hangman Judge 
//题目意思：给定一串a-z组成的字母puzzle让你猜，如果猜对了其中的某一个字母，则puzzle中对应的所有该字母都会出现。
//          如果猜错了则会在一幅“刽子手”画上划上一笔，这幅“刽子手”画7笔就可以画完。如果猜到最后“刽子手”画没画完且所有字母都被猜对则你赢，按照样例格式输出You win；
//          如果猜到最后“刽子手”画画完了则你输，按照样例格式输出You lose；如果猜到最后既没猜完也没画完就算你放弃了，按照样例格式输出You chickened out。
//解题思路：用一个字母数组chAppear[26]来表示puzzle里面26个字母是否出现过或者被猜过（0表示没有出现过，1表示该字母出现过，2表示该字母出现了且被猜过），并且统计puzzle中总共有几个不同的字母需要猜测cnt
//          然后读入guess数组并遍历guess数组的值，如果guess数组对应的字母对应的chAppear值为1，表示猜对了且该字母没有被猜过，对应的chAppear值变为2，并且需要猜测的字母数cnt减一，如果cnt为0，表示全部猜对输出赢；
//          如果guess数组对应的字母对应的chAppear值不为1，则表示要不重复猜测了或者猜错了，那么“刽子手”画添加1笔，如果已经达到7笔则输；
//          如果所有的guess字母都遍历完了cnt也没有为0或者“刽子手”画没有添加到7笔，则输出放弃

#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	while (cin >> n && n != -1)
	{
		string s, guess;//答案序列、猜测序列
		cin >> s >> guess;
		int s_alpha[26] = { 0 }, guess_alpha[26] = { 0 };//序列内有哪些字母，有该字母赋值1
		int len_s = s.length(), len_guess = guess.length();//序列长度
		int i;
		int num_s = 0, num_guess = 0;//序列中有几种字母
		for (i = 0; i < len_s; i++)
		{
			if (s_alpha[s[i] - 'a'] == 0)
			{
				num_s++;
				s_alpha[s[i] - 'a'] = 1;
			}
		}
		int num_count = 0;//猜测次数，到达7次lose
		for (i = 0; i < len_guess; i++)
		{
			if (s_alpha[guess[i] - 'a'] == 1)
			{
				s_alpha[guess[i] - 'a'] = 2;//猜测序列存在该字母，赋值2表示已猜测过
				num_s--;//需要猜测的字母减1
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

