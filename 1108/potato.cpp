// potato.cpp : 定义控制台应用程序的入口点。
//CodeForces  677B Vanya and Food Processor 
//题意：有n个土豆需要切，切土豆机的高度为h，它每秒钟可以切高度k的土豆，如果高度不足k则也需要1秒切完。
//      现在给定n个土豆，按照给定的顺序一个个放到切土豆机里面去切，切的时候1秒钟可以做如下事情：
//      当至少只有一个土豆在土豆机中时，需要把土豆一个个放到切土豆机里面，直到没有多余的空间可以放入下一个土豆为止，同时切掉k高度的土豆（如果不足k也把土豆机里面的剩余土豆切掉）。
//      问切掉给定的n个土豆需要多长时间
//解题思路：连续往里面放土豆，直到高度h不够放新的土豆时候开始切土豆，切（放入的高度/k）秒，
//          判断剩下的土豆（放入的高度%k）是否能够放入新的土豆，如果不够放新的土豆，都需要完全切完，否则就可以继续新的一轮放土豆

#include<iostream>
using namespace std;

int main()
{
	int n, h, k;
	cin >> n >> h >> k;
	long long i;
	long long potato = 0;
	long long potato_left = 0;
	long long time = 0;
	for (i = 0; i < n; i++)
	{
		cin >> potato;
		if (potato + potato_left >= h)
		{
			time += (potato_left / k);
			potato_left = (potato_left%k);
			if (potato + potato_left > h)
			{
				time++;
				potato_left = 0;
			}
			potato_left += potato;
		}
		else
			potato_left += potato;
	}
	if (potato_left)
	{
		time += (potato_left / k);
		if (potato_left%k)
			time++;
	}
	cout << time << endl;
	//system("pause");
    return 0;
}

