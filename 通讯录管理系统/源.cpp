#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"

int main()
{
	int a = 0;
	lianxi arr[1000];
	while (1)
	{
		cout << "1.�����ϵ��  " << "2.��ʾ��ϵ��  " << "3.ɾ����ϵ��  " << "4.������ϵ��  " << "5.�޸���ϵ��  " << "6.�����ϵ��  " << "8.�˳�ͨѶ¼  " << endl << "�����룺";
		cin >> a;
		
		switch (a)
		{
		case 1:
		{
			int i = 0;
			cout << "��Ҫ���������ڼ�����ϵ��" << endl;
			cin >> i;
			arr[i].pan = 1;
			cout << "��������ϵ������ �Ա� ���� ��ϵ�绰 ��ͥסַ" << endl;
			cin >> arr[i].name >> arr[i].sex >> arr[i].age >> arr[i].tele >> arr[i].home;
			cout << "������ɣ�";
			break;
		}
		case 2:
		{
			for (int i = 0;i < 1000;i++)
			{
				if (arr[i].pan == 1)
					cout << arr[i].name << "  " << arr[i].sex << "  " << arr[i].age << "  " << arr[i].tele << "  " << arr[i].home << endl;

			}
			break;

		}
		case 3:
		{

		}
		case 4:
		{

		}
		case 5:
		{

		}
		case 6:
		{

		}
		case 7:
		{

		}
		case 8:
		{

		}
		default:
		{
			cout << "��������ᱻ�滵������" << endl;
			break;
		}
		}

	}
	
}