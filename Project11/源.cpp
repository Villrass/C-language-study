#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
const double PI = 3.14;
////void func(int a)
////{
////	cout << "��������" << endl;
////
////}
//void func(char a)
//{
//	cout << "�������� " << endl;
//
//}
//void func(int &a)
//{
//	cout << "�������� " << endl;
//
//}
//void func(const int &a)
//{
//	cout << "�������� " << endl;
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
//	//����Ȩ��
//	//����Ȩ��
//public:
//	//����
//	int r;
//	//��Ϊ
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
//	a.name = "����Դ";
//	a.id = 123;
//	a.add();
//	a.add1("�޽���");
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
//		name = "����";
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
			cout << "��������" << endl;
		}
		else
			age = setage;
	}
private:

	string name;//�ɶ���д

	int age = 18;//ֻ��

	string idol;//ֻд
};
int main()
{
	person p;
	p.setname("����");
	cout << p.getname() << endl;
	cout << p.getage() << endl;
	p.setidol("����Դ");
	p.setage(60);
	cout << p.getage() << endl;
	system("pause");
	return 0;

}