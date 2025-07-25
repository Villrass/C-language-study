#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"
void dele(lianxi arr[], int len)
{
	string i;
	cout << "请输入你要删除的人的姓名：" << endl;
	cin >> i;
	for (int j = 0;j < 1000;j++)
	{
		if (arr[j].name == i)
			arr[j].pan = 0;
	}
}