#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"
void exchange(lianxi arr[], int len)
{
	string i;
	cout << "请输入你想要修改的联系人的姓名：" << endl;
	cin >> i;
	for (int j = 0;j < 1000;j++)
	{
		if (arr[j].name == i)
		{
			cout << "请您输入修改后的姓名 性别 年龄 联系电话 家庭住址" << endl;
			cin >> arr[j].name >> arr[j].sex >> arr[j].age >> arr[j].tele >> arr[j].home;
		}
	}

}