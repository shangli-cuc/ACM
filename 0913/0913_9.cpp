// 0913_9.cpp : 定义控制台应用程序的入口点。
//Milk（简单的贪心算法）
//某人每天都要喝200mL牛奶，只喝5天以内包括5天生产的牛奶
//当瓶子里牛奶少于200mL的时候就丢弃，已知所有在超市购买的牛奶都是当天生产的
//此人只想买一瓶牛奶，忽略瓶子的体积小于200mL的情况，从已给出的牛奶信息中选出最便宜的

//贪心思路：只买1瓶，小于单天饮用量200mL的直接pass，在200mL~1000mL之间的，比较总价格，超过5天1000mL的，按照1000mL来比较价格，
//保留价格低的，如果上述价格相等，保留体积大的


#include <iostream>  
#include <string>  
using namespace std;


/*
class Milk
{
public :
	void setMilk(int x, int y,string s)
	{
		price = x;
		volume = y;
		name = s;
	}
	void printMilk( )
	{
		printf("%s", name);
	}
	int priceMilk()
	{
		return price;
	}
	int volumeMilk()
	{
		return volume;
	}
private:
	string name;
	int price;
	int volume;
};


int main()
{
	int T,flag=1;
	cin >> T;
	while (flag <= T)
	{
		Milk milk[20];
		int N,num=0;
		int p, v;
		int temp;
		char s[100];
		while (cin>>N)
		{
			while (cin>>p>>v>>s && (num<N))
			{
				milk[num].setMilk(p, v, s);
				num++;
			}
			for (num = 0; num < N; num++)
			{
				if (milk[num].priceMilk > milk[num + 1].priceMilk)
					temp = num;
			}
		}
		flag++;
	}
    return 0;
}

*/

double result_price, result_volume;
string result_name;
int T;
int N;
string name;
double price, volume;
const double MAX = 10005;
int main()
{
	//int T;
	cin >> T;
	while (T-- && T != EOF)
	{
		//int N;
		cin >> N;
		if (N < 1 || N>100)
			break;
		//double result_price = 10005, result_volume = 0;
		//string result_name;
		result_price = MAX;
		result_volume = 0;
		while (N--)
		{
			//string name;
			//double price, volume;
			cin >> name >> price >> volume;
			if (volume < 200)
				continue;//pass
			if (volume >= 1000)
				price /= 5;//超过1000mL，每天肯定够200mL，所以按照平均5天计算价格
			else
				price = price / volume * 200;//在200mL到1000mL之间，按照每天200mL计算价格
			if (price <= result_price)//取价格较小的
			{
				result_name = name;
				result_price = price;
				result_volume = volume;
			}
			else if (price == result_price)//价格相等时，取体积较大的
			{
				if (volume > result_volume)
				{
					result_name = name;
					result_price = price;
					result_volume = volume;
				}
			}
		}
		cout << result_name << endl;
	}
	return 0;
}