#pragma once
#include<iostream>
#include<string>
using namespace std;
class point
{
public:
	void setx(int setx);
	
	int getx();

	void sety(int sety);
	
	int gety();
	

private:

	int m_x;
	int m_y;
};
