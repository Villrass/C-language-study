#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("hao\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//
//}
int main()
{
	int line = 0;
	printf("��Դ���Ͻ���\n");


	while (line < 200)
	{
		printf("��Դ�ͽ�����%d��\n",line);
		line++;
	}
	if (line >= 200)
	{
		printf("���ﰮ����Դ\n");
	}
    else
{
		printf("��Դ�ɰ��\n");
	}
	return 0;
}
//int Add(int x, int y)
//{
//	return(x + y);
//}
//
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);
//	printf("%d\n", sum);
//	int a = 100;
//	int b = 200;
//	int c = Add(a, b);
//	printf("%d\n", c);
//

//	//return 0;
//}
//int main()
//{
//	int arr[] = { 10,11,12,13,14,15,16,17,18,19 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int b = 0;
//	b = a * 14 - 10 + c / 2;
//	printf("%d\n", b);
//
//
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x <= 0)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("-1\n");
//	}
//
//	return 0;
//}