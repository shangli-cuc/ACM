// KickDown.cpp : 定义控制台应用程序的入口点。
//有两个长度分别为n1, n2（n1, n2 <= 100）且每列高度只为h或者2h的长条齿轮。
//需要将它们对扣放入一个高度为3h的容器中，问能够容纳他们的最短容器长度
//读入master和driven两个齿轮各位置上的高度，然后先用driven从master的第i个位置开始试driven能否和master从0开始的位置对应匹配其高度不超过3h，如果一直到任一齿轮结束都能匹配则得到容器的最短长度；
//然后再用同样的方法对master用driven去匹配（对应匹配的方向不一样）找到这种情况下的最短容器长度；最后和上面求得的最短容器长度再取最小值即为答案



#include<iostream>   
#include<algorithm>  
#include<string>  
using namespace std;
int main()
{
	string master, driven;//下面的和上面的齿轮
	while (cin>>master>>driven)
	{
		int len_m = master.length();
		int len_d = driven.length();
		int i, j;
		int ok;
		int num = len_d + len_m;
		for (i = 0; i < len_d; i++)//driven去匹配master
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
			if (ok)//表示driven从下标i处和master匹配,i为匹配的起始处
			{
				num = min(num,max(len_d,len_m+i));
				break;
			}
		}
		for (i = 0; i < len_m; i++)//master来匹配driven
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

