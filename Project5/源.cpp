#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//}
//int main()
//{
//	int a,b;
//	scanf("%d", &a);
//	b = a % 2;
//	if (0 == b)
//		printf("��������");
//	else
//		printf("������");
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
		printf("����1");
		break;
	case 2:
		printf("����2");
		break;
	default:
		printf("��");
	}
			return 0;
}