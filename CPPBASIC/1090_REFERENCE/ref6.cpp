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

void f1(Point  p) {}	// 복사본 생성
void f2(Point& r) {}	// 복사본 아님.


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
				   // 참조리턴인경우 에러 아님.

	std::cout << pt.x << std::endl; // 20
}
