#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"
void exchange(lianxi arr[], int len)
{
	string i;
	cout << "����������Ҫ�޸ĵ���ϵ�˵�������" << endl;
	cin >> i;
	for (int j = 0;j < 1000;j++)
	{
		if (arr[j].name == i)
		{
			cout << "���������޸ĺ������ �Ա� ���� ��ϵ�绰 ��ͥסַ" << endl;
			cin >> arr[j].name >> arr[j].sex >> arr[j].age >> arr[j].tele >> arr[j].home;
		}
	}

}