/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// sbinding.cpp
#include <iostream>

struct Point
{
	int x = 10;
	int y = 20;
};
int main()
{
	Point p;

	//int a = p.x;
	//int b = p.y;

	//int [a, b] = p; // error

	//const auto [a, b] = p; 

	int x[2] = { 1,2 };

	auto[a, b] = x;

	std::cout << a << ", " << b << std::endl;	
}
