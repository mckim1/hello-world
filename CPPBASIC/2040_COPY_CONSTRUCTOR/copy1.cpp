/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Point
{
public:
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	
	// 복사 생성자.
	Point(const Point& p) : x(p.y), y(p.x)
	{
		//x = p.x;
		//y = p.y;
	}
	
};

int main()
{
	Point p1;		// 1
	Point p2(1, 2);	// 2
	//Point p3(1);	// error.
	Point p4(p2);	// ok. Point( Point )  

	std::cout << p4.x << std::endl; // 1
	std::cout << p4.y << std::endl; // 2

}
