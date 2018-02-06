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

int main()
{
	Point p1(1, 2);	// ������
	Point p2(p1);	// ���� ������.
	Point p3{ p1 }; // ���� ������
	Point p4 = p1;  // Point p4(p1),   ���� ������.

	//int n = 0;
	//int n(0);

}