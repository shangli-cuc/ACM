// HDU-2059.cpp : 定义控制台应用程序的入口点。
//题意：输入第1行L表示跑到长度，第2行N、C、T分别表示充电站个数，电动车满电后行驶距离，每次充电所需时间
//第3行VR、VT1、VT2分别表示兔子的速度、乌龟开电动车的速度、乌龟脚蹬车的速度，第4行的N个整数，表示各个充电站距离起点的距离
//当乌龟有可能赢的时候输出“What a pity rabbit!”，否则输出“Good job,rabbit!”，默认没有同时到达的情况
/*
这道题目是DP中多阶段决策的典型例题
将起点和终点划分到N个加电站中去
这样一共有N+2点,用DP[i]表示到第i个加电站的最小耗费时间
那么在求DP[i]的时候，DP[0]...DP[i-1]已经求得
让j从0遍历到i-1,每一个j表示最后一次充电到i点
那么状态转移方程为
DP[i] = min(DP[j] + t(j, i)) //t(j, i)表示从j充完电一直到i点(中途没有充过电)
*/
#include<iostream>
const double max = 0xfffff;//0x代表十六进制
using namespace std;
double min(double x, double y)
{
	return x > y ? y : x;
}
int main()
{
	double path_long;
	int power_num;
	double power_path_long, power_time;
	double rabbit_speed, power_speed, walk_speed;
	double power[105];
	double DP[105];
	while (cin >> path_long && path_long != EOF)//跑道的总长度
	{
		cin >> power_num >> power_path_long >> power_time;//充电站的个数，电动车冲满电以后能行驶的距离以及每次充电所需要的时间
		cin >> rabbit_speed >> power_speed >> walk_speed;//兔子跑步的速度，乌龟开电动车的速度，乌龟脚蹬电动车的速度
		int i, j, len;
		double time;
		for (i = 1; i <= power_num; i++)
		{
			cin >> power[i];//各个充电站离跑道起点的距离
		}
		power[0] = 0;//假设起点位置有充电站，则距离起点长度为0
		power[power_num + 1] = path_long;//假设终点位置有充电站，则距离起点位置为跑道总长度path_long
		DP[0] = 0;//起点位置时间为0
		for (i = 1; i <= power_num+1; i++)
		{
			DP[i] = max;//到达每个充电站所需要的最短时间，初始置为最大
			for (j = 0; j <i; j++)
			{
				len = power[i] - power[j];
				if (len >= power_path_long)//如果两个充电站间距大于满电长度，剩下的距离用walk_speed的速度跑完
					time = (len - power_path_long) / walk_speed + power_path_long / power_speed;
				else
					time = len / power_speed;
				if (j > 0)
				{
					time += power_time;//如果不是起点，需要加上充电时间
				}
				time += DP[j];
				DP[i] = min(DP[i], time);
			}
		}
		time = path_long / rabbit_speed;
		if (time > DP[power_num + 1])//兔子花的时间大于乌龟
			cout << "What a pity rabbit!" << endl;
		else
			cout << "Good job,rabbit!" << endl;
	}
    return 0;
}

