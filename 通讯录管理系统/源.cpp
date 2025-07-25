#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"
int main()
{
	int a = 0;
	lianxi arr[1000];
	while (1)
	{
		cout << "1.添加联系人  " << "2.显示联系人  " << "3.删除联系人  " << "4.查找联系人  " << "5.修改联系人  " << "6.清空联系人  " << "7.退出通讯录  " << endl << "请输入：";
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
			cout << "已经清空全部联系人" << endl;
			break;
		}
		case 7:
		{
			system("pause");
			return 0;
		}
		
		default:
		{
			cout << "胡乱输入会被玩坏的啦！" << endl;
			break;
		}
		}

	}
	
}