#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//int main()
//{
//	int a = 0;
//	do
//	{
//		cout << a << endl;
//		a++;
//
//	} while (a < 10)
//		;
//	system("pause");
//	return 0;
//}
//int main()
//{
//    int a =99;
//    do
//    {
//        a++;
//        int b, c, d;
//        b = a / 100;
//        c = (a / 10) % 10;
//        d = a % 10;
//        if (a == b*b*b + c*c*c + d*d*d)
//            cout << a << endl;
//
//    } while (a < 999);
//    system("pause");
//    return 0;
//
//
//
//}
//int main()
//{
//	for (int a = 0;a < 10;a++)
//	{
//		cout << a << endl;
//
//	}
//	system("pause");
//	return 0;
//
// }
//int main()
//{
//	for (int i = 1;i <= 100;i++)
//	{
//		int a = i % 10;
//		int b = (i / 10) % 10;
//		if (a == 7 || b == 7 || i % 7 == 0)
//			cout << "敲桌子" << endl;
//		else
//			cout << i << endl;
//	}
//	system("pause");
//	return 0;
//
//}
//int main()
//{
//	for (int i = 0;i < 10;i++)
//	{
//		int a = 0;
//		do {
//			
//			cout << "* ";
//			a++;
//		} while (a < 10);
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	for (int i = 1;i < 10;i++)
//	{
//		for (int j =1;j <= i;j++)
//		{
//			
//			cout << j << "*" << i << "=" << j * i << "  ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	for (int i = 1;i <= 9;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			cout << j << "  ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 300,350,400,200,250 };
//	int max = 0;
//	for (int a = 0;a < 5;a++)
//	{
//		if (arr[a] > max)
//			max = arr[a];
//
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int exchange = 0;
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0])-1;
//	while (start < end)
//	{
//		
//		exchange = arr[start];
//		arr[start] = arr[end];
//		arr[end] = exchange;
//		start++;
//		end--;
//	}
//	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
//	{
//		cout << arr[i];
//
//	}
//	system("pause");
//	return 0;
//}
//冒泡排序
//int main()
//{
//	int arr[] = { 5,6,8,2,3,4,9 };
//	int exchange, max, min;
//	for (int j = sizeof(arr) / sizeof(arr[0]);j>0;j--)
//	{
//		for (int i = 0;i < j;i++)
//		{
//			max = i + 1;
//			min = i;
//			if (arr[max] > arr[min])
//			{
//				exchange = arr[max];
//				arr[max] = arr[min];
//				arr[min] = exchange;
//			}
//
//
//		}
//	}
//	for (int k=0;k < sizeof(arr) / sizeof(arr[0]);k++)
//	{
//		cout << arr[k];
//		
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//	
//
//}


//int main()
//{
//	int num;
//	cout << "请问你要进行几个数字的排序" << endl;
//	cin >> num;
//	int arr[100];
//	int count = 0;
//	cout << "请输入数字" << endl;
//	while (count<num && cin >> arr[count])
//	{
//		count++;
//	}
//	cin.clear();
//	cin.ignore(10000, '\n');
//
//
//	int exchange, max, min;
//	for (int j = count;j > 0;j--)
//	{
//		for (int i = 0;i < j-1;i++)
//		{
//			max = i + 1;
//			min = i;
//			if (arr[max] > arr[min])
//			{
//				exchange = arr[max];
//				arr[max] = arr[min];
//				arr[min] = exchange;
//			}
//
//
//		}
//	}
//	for (int k = 0;k < count;k++)
//	{
//		cout << arr[k]<<"  ";
//
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//
//
//}
//int main() {
//    int arr[20];
//    int count = 0;
//
//    cout << "请输入一串数字（最多20个，以非数字结束）：" << endl;
//
//    // 循环读取数字，直到输入非数字或者数量达到20
//    while (count < 20 && cin >> arr[count]) {
//        count++;
//    }
//    cout << count << endl;
//
//        system("pause");
//        return 0;
//    }
//int main()
//{
//	int arr[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
//	int w = arr[0][0] + arr[0][1] + arr[0][2];
//	int l = arr[1][0] + arr[1][1] + arr[1][2];
//	int z = arr[2][0] + arr[2][1] + arr[2][2];
//	cout << "王五成绩为" << w << endl;
//	cout << "李四成绩为" << l << endl;
//	cout << "张三成绩为" << z << endl;
//	system("pause");
//	return 0;
//}

#include<string>
int main()
{
	string name[3] = { "张三","李四","王五" };
	int arr[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
	for (int i = 0;i < 3;i++)
	{
		int k = 0;
		for (int j = 0;j < 3;j++)
		{
			k += arr[i][j];
		}
		cout << name[i] << "分数为" << k << endl;
	}
	system("pause");
	return 0;
}