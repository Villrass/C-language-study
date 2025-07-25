#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
const double PI = 3.14;
////void func(int a)
////{
////	cout << "函数重载" << endl;
////
////}
//void func(char a)
//{
//	cout << "函数重载 " << endl;
//
//}
//void func(int &a)
//{
//	cout << "函数重载 " << endl;
//
//}
//void func(const int &a)
//{
//	cout << "函数重载 " << endl;
//
//}
//int main()
//{
//	int a = 0;
//	char b = 0;
//	func(a);
//	func(10);
//	func(b);
//	system("pause");
//	return 0;
//}
//class student;
//
//class circle
//{
//	//访问权限
//	//公共权限
//public:
//	//属性
//	int r;
//	//行为
//	double zhou()
//	{
//		return 2 * PI * r;
//	}
//
//};
//class student
//{
//public:
//	string name;
//	int id;
//	void add()
//	{
//		cout << name << "  " << id;
//
//	}
//	void add1(string name1)
//	{
//		name = name1;
//	}
//	void add2(int  id1)
//	{
//		id = id1;
//	}
//};
//
//int main()
//{
//	circle cl;
//	cl.r = 10;
//	cout << cl.zhou() << endl;
//	student a;
//	a.name = "杨清源";
//	a.id = 123;
//	a.add();
//	a.add1("罗金秋");
//	a.add2(321);
//	a.add();
//
//	system("pause");
//	return 0;
//
//
//}
//class person {
//public:
//	string name;
//protected:
//	string car;
//private:
//	int id;
//public:
//	void func()
//	{
//		name = "张三";
//	}
//};
//int main()
//{
//	person p;
//	
//	cout << p.name << endl;
//	p.func();
//	cout << p.name;
//
//	system("pause");
//	return 0;
//}
class person
{
public:
	void setname(string name1)
	{
		name = name1;
	}
	string getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}
	void setidol(string idol1)
	{
		idol = idol1;
	}
	void setage(int setage)
	{
		if (setage < 0 || setage>150)
		{
			cout << "输入有误" << endl;
		}
		else
			age = setage;
	}
private:

	string name;//可读可写

	int age = 18;//只读

	string idol;//只写
};
int main()
{
	person p;
	p.setname("张三");
	cout << p.getname() << endl;
	cout << p.getage() << endl;
	p.setidol("杨清源");
	p.setage(60);
	cout << p.getage() << endl;
	system("pause");
	return 0;

}