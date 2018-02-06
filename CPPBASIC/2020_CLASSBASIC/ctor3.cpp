/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// ctor3.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point()	{ std::cout << "Point()" << std::endl;	}
};

class Rect
{
	Point p1;
	Point p2;
public:
	Rect() { std::cout << "Rect()" << std::endl; }
};

int main()
{
	Rect r;
}






