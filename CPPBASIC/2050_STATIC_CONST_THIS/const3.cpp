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
	Point(int a, int b) : x(a), y(b) {}
	
	int getX() const { return x; }

	void print() const
	{
		std::cout << x << ", " << y << std::endl;
	}
};

void foo(const Point& p)
{
	p.print(); // ?? error
}

int main()
{
	Point p(1, 2);

	p.print(); // ok...
	
	foo(p);
}
