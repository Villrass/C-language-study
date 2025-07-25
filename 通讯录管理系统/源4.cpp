#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"
void fin(lianxi arr[], int len)
{
	string i;
	cout << "请输入你要查找的人的姓名：" << endl;
	cin >> i;
	for (int j = 0;j < 1000;j++)
	{
		if (arr[j].name == i&&arr[j].pan==1)
			cout << arr[j].name << "  " << arr[j].sex << "  " << arr[j].age << "  " << arr[j].tele << "  " << arr[j].home << endl;
	}
	system("pause");
	system("cls");
}