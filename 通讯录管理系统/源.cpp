#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"
int main()
{
	int a = 0;
	lianxi arr[1000];
	while (1)
	{
		cout << "1.�����ϵ��  " << "2.��ʾ��ϵ��  " << "3.ɾ����ϵ��  " << "4.������ϵ��  " << "5.�޸���ϵ��  " << "6.�����ϵ��  " << "7.�˳�ͨѶ¼  " << endl << "�����룺";
		cin >> a;
		
		switch (a)
		{
		case 1:
		{
			add(arr, 1000);
			break;
		}
		case 2:
		{
			printfcout(arr,1000);
			break;
		}
		case 3:
		{
			dele(arr, 1000);
		}
		break;
		case 4:
		{
			fin(arr, 1000);
		}
		break;
		case 5:
		{
			exchange(arr, 1000);
			break;
		}
		case 6:
		{
			for (int i = 0;i < 1000;i++)
			{
				arr[i].pan = 0;
			}
			cout << "�Ѿ����ȫ����ϵ��" << endl;
			break;
		}
		case 7:
		{
			system("pause");
			return 0;
		}
		
		default:
		{
			cout << "��������ᱻ�滵������" << endl;
			break;
		}
		}

	}
	
}