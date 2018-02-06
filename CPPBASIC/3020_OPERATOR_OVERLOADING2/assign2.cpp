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
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void print() const
	{
		std::cout << x << ", " << y << std::endl;
	}

	Point& operator=(const Point& p)
	{
		x = p.x;
		y = p.y;
		std::cout << "=" << std::endl;
		return *this;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);
	Point p3;

//	p3 = (p1 = p2);

	// p3
	(p3 = p1) = p2;

	//p1.print();
	p3.print(); // 2,2
}

