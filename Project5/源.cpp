#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//}
//int main()
//{
//	int a,b;
//	scanf("%d", &a);
//	b = a % 2;
//	if (0 == b)
//		printf("不是奇数");
//	else
//		printf("是奇数");
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//
//	while (a < 100)
//	{
//		int b = a % 2;
//		if (1 == b)
//		{
//			printf("%d\n", a);
//			a++;
//		}
//		else
//			a++;
//	}
//	return 0;
//}
int main()
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期1");
		break;
	case 2:
		printf("星期2");
		break;
	default:
		printf("无");
	}
			return 0;
}