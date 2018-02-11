/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b)
	{
		std::cout << "Point()" << std::endl;
	}
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "Point(Point&)" << std::endl;
	}
};

//void foo(Point pt) // Point pt = p; // 복사 생성자
void foo(const Point& pt)
{
}

int main()
{
	Point p; // 생성자
	foo(p);
}
