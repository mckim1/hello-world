/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Point
{
	int x, y;
	mutable int cnt = 0;
public:
	Point(int a, int b) : x(a), y(b) {}

	void print() const
	{
		++cnt;
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
	Point p(1, 2);
	p.print();
}
