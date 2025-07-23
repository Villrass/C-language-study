#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
struct hero
{
	string name;
	int age;
	string sex;
};
void exchange(hero arr[], int len)
{
	for (int i = 5;i > 0;i--)
	{
		for (int j = 0;j < i ;j++)
		{
			if (arr[j].age < arr[j + 1].age)
			{
				int temp = 0;
				temp = arr[j].age;
				arr[j].age = arr[j + 1].age;
				arr[j + 1].age = temp;
				string temp1 = "wu";
				temp1 = arr[j].name;
				arr[j].name = arr[j + 1].name;
				arr[j + 1].name = temp1;
				string temp2 = "hu";
				temp2 = arr[j].sex;
				arr[j].sex = arr[j + 1].sex;
				arr[j + 1].sex = temp2;
			}
		}
	}

}
int main()
{
	hero arr[5] = {
		{"Áõ±¸",23,"ÄÐ"},
		{"¹ØÓð",22,"ÄÐ"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"},
		{"õõ²õ",19,"Å®"},


	};
	exchange(arr, 5);
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i].name << arr[i].age << arr[i].sex << endl;
	}
	
	
}