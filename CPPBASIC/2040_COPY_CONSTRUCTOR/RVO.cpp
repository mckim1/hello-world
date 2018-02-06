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
	Point(int a = 0, int b = 0) 
	{
		std::cout << "Point()" << std::endl;
	}
	Point(const Point& p)
	{
		std::cout << "Point(Point&)" << std::endl;
	}
	~Point()
	{
		std::cout << "~Point()" << std::endl;
	}
};
int main()
{
	Point p1(1, 1);			// 1. 持失切
	cout << "AAA" << endl;	// 2. AAA
}							// 3. 社瑚切