// 0913_9.cpp : �������̨Ӧ�ó������ڵ㡣
//Milk���򵥵�̰���㷨��
//ĳ��ÿ�춼Ҫ��200mLţ�̣�ֻ��5�����ڰ���5��������ţ��
//��ƿ����ţ������200mL��ʱ��Ͷ�������֪�����ڳ��й����ţ�̶��ǵ���������
//����ֻ����һƿţ�̣�����ƿ�ӵ����С��200mL����������Ѹ�����ţ����Ϣ��ѡ������˵�

//̰��˼·��ֻ��1ƿ��С�ڵ���������200mL��ֱ��pass����200mL~1000mL֮��ģ��Ƚ��ܼ۸񣬳���5��1000mL�ģ�����1000mL���Ƚϼ۸�
//�����۸�͵ģ���������۸���ȣ�����������


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
				price /= 5;//����1000mL��ÿ��϶���200mL�����԰���ƽ��5�����۸�
			else
				price = price / volume * 200;//��200mL��1000mL֮�䣬����ÿ��200mL����۸�
			if (price <= result_price)//ȡ�۸��С��
			{
				result_name = name;
				result_price = price;
				result_volume = volume;
			}
			else if (price == result_price)//�۸����ʱ��ȡ����ϴ��
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