/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Point
{
public:
	int y;
	int x;

public:
	Point() : y(0), x(y)
	{
	}
};

int main()
{
	Point p;

	std::cout << p.x << std::endl; // 쓰레기값
	std::cout << p.y << std::endl; // 0
}
