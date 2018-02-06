/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Point
{
	int x, y;
	//int* buf;
public:
	Point() 
	{
		std::cout << "Point()" << std::endl; 
	//	buf = new int[10];
	}
	/*
	~Point() 
	{
	//	delete[] buf;
		std::cout << "~Point()" << std::endl; 
	}
	*/
};

int main()
{
	Point p;
}