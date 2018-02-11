/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a = 0, int b = 0);
};

Point::Point(int a, int b) : x(a), y(b)
{

}


int main()
{
	Point p;
}
