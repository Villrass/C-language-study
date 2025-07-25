#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"
void add(lianxi arr[], int len)
{
	int i = 0;
	cout << "你要把他保存在几号联系人" << endl;
	cin >> i;
	arr[i].pan = 1;
	cout << "请输入联系人姓名 性别 年龄 联系电话 家庭住址" << endl;
	cin >> arr[i].name >> arr[i].sex >> arr[i].age >> arr[i].tele >> arr[i].home;
	cout << "保存完成！";
	system("cls");
}