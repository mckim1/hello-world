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
	void set(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

int main()
{
	Point p;
	p.set(10, 20);

}