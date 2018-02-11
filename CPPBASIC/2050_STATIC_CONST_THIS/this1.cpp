/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Point
{
	int x = 0;
	int y = 0;
public:
	void set(int a, int b)
	{
		std::cout << this << std::endl;
		x = a;
		y = b;
	}
};

int main()
{
	Point p1;
	Point p2;

	std::cout << &p1 << std::endl;

	p1.set(10, 20); // set( &p1, 10, 20)

	std::cout << &p2 << std::endl;
	p2.set(10, 20);
}
