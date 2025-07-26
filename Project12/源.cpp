//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//#include<string>
//
//
//class cube
//{
//private:
//	int h;
//	int l;
//	int w;
//public:
//	void chengyuan(cube& c)
//	{
//		if (h == c.geth() && l == c.getl() && w == c.getw())
//		{
//			cout << "相等" << endl;
//		}
//		else
//		{
//			cout << "不相等" << endl;
//		}
//	}
//	void seth(int seth)
//	{
//		h = seth;
//	}
//	int geth()
//	{
//		return h;
//	}
//	void setw(int setw)
//	{
//		w = setw;
//	}
//	int getw()
//	{
//		return w;
//	}
//	void setl(int setl)
//	{
//		l = setl;
//	}
//	int getl()
//	{
//		return l;
//	}
//	int S()
//	{
//		return 2 * (h * l + h * w + w * l);
//	}
//	int V()
//	{
//		return h * l * w;
//	}
//
//
//};
//void all(cube& c1, cube& c2)
//
//{
//	if (c1.geth() == c2.geth() && c1.getl() == c2.getl() && c1.getw() == c2.getw())
//	{
//		cout << "相等" << endl;
//
//	}
//	else
//		cout << "不相等" << endl;
//}
//int main()
//{
//	cube s1, s2;
//	s1.seth(5);
//	s1.setl(6);
//	s1.setw(7);
//	s2.setw(5);
//	s2.setl(6);
//	s2.seth(7);
//	int S1 = s1.S();
//	int S2 = s2.S();
//	s1.chengyuan(s2);
//	all(s1, s2);
//
//
//	system("pause");
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
#include"标头.h"
class circle
{
public:
	void setr(int setr)
	{
		m_r = setr;
	}
	int getr()
	{
		return m_r;
	}
	void setcenter(point setcenter)
	{
		center = setcenter;
	}
	point getcenter()
	{
		return center;
	}
	
private:

	int m_r;
	point center;
};
void pan(circle& a, point& b)
{
	int l = (a.getcenter().getx() - b.getx()) * (a.getcenter().getx() - b.getx()) + (a.getcenter().gety() - b.gety()) * (a.getcenter().gety() - b.gety());
	int R = a.getr() * a.getr();

		if (l == R)
			cout << "点在圆上" << endl;
		else if (l > R)
			cout << "点在圆外"<<endl;
		else
			cout << "点在圆内" << endl;
	
}
int main()
{
	point a;
	circle b;
	point c;
	a.setx(5);
	a.sety(6);
	b.setr(8);
	c.setx(10);
	c.sety(3);
	b.setcenter(c);
	pan(b, a);
	system("pause");
	return 0;
}