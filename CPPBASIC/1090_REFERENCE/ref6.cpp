/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// ref6.cpp
#include <iostream>

struct Point
{
	int x, y;

//	Point() {}
};

void f1(Point  p) {}	// ���纻 ����
void f2(Point& r) {}	// ���纻 �ƴ�.


Point pt; 

//Point goo() { return pt; }
//Point& goo() { return pt; }

Point& goo()
{
	Point p;
	return p;
}


int main()
{
	goo().x  = 20; // error.
				   // ���������ΰ�� ���� �ƴ�.

	std::cout << pt.x << std::endl; // 20
}