#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"
void dele(lianxi arr[], int len)
{
	string i;
	cout << "��������Ҫɾ�����˵�������" << endl;
	cin >> i;
	for (int j = 0;j < 1000;j++)
	{
		if (arr[j].name == i)
			arr[j].pan = 0;
	}
}