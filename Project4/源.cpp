#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[20];
};


void dayin(struct Stu* dizhi)
{
	printf("%s %d %s %s\n", (*dizhi).name, (*dizhi).age, (*dizhi).sex, (*dizhi).tele);
	printf("%s %d %s %s\n", dizhi->name, dizhi->age, dizhi->sex, dizhi->tele);
}
int main()
{

	struct Stu s = { "½ðÇï", 16, "girl", "15380500904"};
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	dayin(&s);
	return 0;
}