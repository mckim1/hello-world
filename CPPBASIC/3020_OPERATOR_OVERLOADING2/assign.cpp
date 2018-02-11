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

	/*
	? operator=(const Point& p)
	{
		x = p.x;
		y = p.y;
		//return *this;
	}
	*/
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);
	Point p3 = p2; // 복사 생성자

	//p1 + p2; // p1.operator+(p2)
	p1 = p2; // p1.operator=(p2)

	p1.print();
}
