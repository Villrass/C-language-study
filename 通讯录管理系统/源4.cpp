#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"
void fin(lianxi arr[], int len)
{
	string i;
	cout << "��������Ҫ���ҵ��˵�������" << endl;
	cin >> i;
	for (int j = 0;j < 1000;j++)
	{
		if (arr[j].name == i&&arr[j].pan==1)
			cout << arr[j].name << "  " << arr[j].sex << "  " << arr[j].age << "  " << arr[j].tele << "  " << arr[j].home << endl;
	}
	system("pause");
	system("cls");
}