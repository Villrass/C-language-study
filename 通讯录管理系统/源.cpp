#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"

int main()
{
	int a = 0;
	lianxi arr[1000];
	while (1)
	{
		cout << "1.添加联系人  " << "2.显示联系人  " << "3.删除联系人  " << "4.查找联系人  " << "5.修改联系人  " << "6.清空联系人  " << "8.退出通讯录  " << endl << "请输入：";
		cin >> a;
		
		switch (a)
		{
		case 1:
		{
			int i = 0;
			cout << "你要把他保存在几号联系人" << endl;
			cin >> i;
			arr[i].pan = 1;
			cout << "请输入联系人姓名 性别 年龄 联系电话 家庭住址" << endl;
			cin >> arr[i].name >> arr[i].sex >> arr[i].age >> arr[i].tele >> arr[i].home;
			cout << "保存完成！";
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
			cout << "胡乱输入会被玩坏的啦！" << endl;
			break;
		}
		}

	}
	
}