#define _CRT_SECURE_NO_WARNINGS 1
#include"БъЭЗ.h"
void printfcout(lianxi arr[],int len)
{
	for (int i = 0;i < 1000;i++)
	{
		if (arr[i].pan == 1)
			cout << arr[i].name << "  " << arr[i].sex << "  " << arr[i].age << "  " << arr[i].tele << "  " << arr[i].home << endl;

	}
	system("pause");
	system("cls");

}