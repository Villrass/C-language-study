#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"
void add(lianxi arr[], int len)
{
	int i = 0;
	cout << "��Ҫ���������ڼ�����ϵ��" << endl;
	cin >> i;
	arr[i].pan = 1;
	cout << "��������ϵ������ �Ա� ���� ��ϵ�绰 ��ͥסַ" << endl;
	cin >> arr[i].name >> arr[i].sex >> arr[i].age >> arr[i].tele >> arr[i].home;
	cout << "������ɣ�";
	system("cls");
}