#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

void exchange(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;

}




int main()
{
	int a = 10;
	int b = 20;
	exchange(a, b);
	cout << a << endl;
	cout << b << endl;

}