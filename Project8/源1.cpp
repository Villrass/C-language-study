//#define _CRT_SECURE_NO_WARNINGS 1
//#include"exchange.h"
//int main()
//{
//	int c = 10;
//	int d = 20;
//	exchange(c ,d);
//	cout << c << d;
//
//}
#include<iostream>
using namespace std;
#include<string>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;
//	for (int i = 0;i < 5;i++)
//	{
//		cout << *p << endl;
//		p++;
//	}
//	system("pause");
//	return 0;
//
//}
//void pai(int arr[], int len)
//{
//	for (int i = len-1;i > 0;i--)
//	{
//		for (int j = 0;j <= i;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+ 1] = temp;
//			}
//		}
//	}
//}
//struct student {
//	string name;
//	int age;
//	int score;
//};
//struct teacher {
//	string name;
//	int age;
//	int id;
//	struct student stu;
//};
//ostream& operator<<(ostream& os, const student& s)
//{
//	os << s.name << s.age << s.score;
//	return os;
//}
//void printfstudent1(struct student s)
//{
//	cout << s.name << endl;
//}
//void printfstudent2(struct student* s)
//{
//	cout << s->name;
//}
//int main()
//{
//	student s = { "张三",18,100 };
//	//teacher z = { "老师",20,114514, s};
//	//cout << z.name << z.age << z.id << z.stu.name << endl;
//	//cout << s;
//	printfstudent1(s);
//	printfstudent2(&s);
//
//}
struct student {
	string name;
	int score;
};
struct teacher {
	string name;
	struct student arr[5];
};
void fuzhi(teacher &t)
{

	for (int j = 0;j < 5;j++)
	{
		cout << "请输入第" << j + 1 << "个学生的名字和成绩" << endl;
		cin >> t.arr[j].name >> t.arr[j].score;
	}
}
int main()
{
	teacher t[3];
	for (int i = 0;i < 3;i++)
	{
		cout << "请输入老师的名字" << endl;
		cin >> t[i].name;
		fuzhi(t[i]);
	}
	for (int k = 0;k < 3;k++)
	{
		cout << "第" << k << "个老师的姓名以及学生信息如下" << endl << t->name << endl;
		for (int l = 0;l < 5;l++)
		{
			cout << t[k].arr[l].name << "  " << t[k].arr[k].score << endl;
		}
	}
	system("pause");
	return 0;
}
