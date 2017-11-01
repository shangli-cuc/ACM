// The Dole Queue.cpp : 定义控制台应用程序的入口点。
//UVA 133 The Dole Queue 
//题目意思：N个人站成一圈，逆时针编号为1~N，现在有两个官员，A官员从1开始逆时针数，B官员从N开始顺时针数。
//          在每一轮中A官员数到k个就停下来，B官员数到m个就停下来（注意两人是同时数的），有可能两人数到同一个人身上。
//          被官员数中的人（1个或者2个）离开队伍。输出离开队伍的人员序号，先输出A官员的再输出B官员的，并且每个数据输出占3个字符长度，一轮数据之间用逗号隔开，最后一组数据没有逗号输出
//解体思路：用一个数组chosenFlag[25]来记录当前序号的人是否在队列中，对于每一轮：对于所有还在队列中的人，A官员从从他自己数的上一次出队的人的右手边开始逆时针数k个未出队的人（刚开始的时候A从1开始数），
//          同时B官员从他自己数的上一次出队的人的左手边开始顺时针数m个未出队的人（刚开始的时候B从N开始数），判断被数到的人是否是同一人，如果是同1人则只输出出队人序号1次，如果是2人则分别输出出队人的序号，对应出队人的出队标志置为1

#include<iostream>
using namespace std;


int main()
{
	int n, k, m;
	while (cin >> n >> k >> m && n && k && m)
	{
		int num[30] = { 0 };
		int i, j;
		for (i = 1; i <= n; i++)
			num[i] = i;
		int remainder = n;
		int flagA = k, flagB = m;//A、B官员数的人数
		int startA = 1, startB = n;//A、B开始数的地方
		int outA, outB;
		while (remainder)//队列里还有人
		{
			while (flagA)
			{
				if (num[startA] != 0)//startA处的人没有出列
					flagA--;//相当于数了1次
				startA++;//验证下一个
				if (startA > n)//数超过了n，重新从1开始，如果1处已经出列
					startA = 1;
			}//A官员数完，出列的为startA-1
			if (startA == 1)
				outA = n;
			else
				outA = startA - 1;
			printf("%3d",outA);
			remainder--;
			if (remainder)//A官员数完还有人
			{
				while (flagB)//B官员开始数
				{
					if (num[startB] != 0)
						flagB--;
					startB--;
					if (startB < 1)
						startB = n;
				}
				if (startB == n)
					outB = 1;
				else
					outB = startB + 1;
				if (outA != outB)
				{
					printf("%3d", outB);
					num[outB] = 0;
					remainder--;
				}
			}
			num[outA] = 0;
			if (remainder)
				cout << ',';
			flagA = k;
			flagB = m;
		}
		cout << endl;
	}
    return 0;
}

