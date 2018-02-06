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
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b) 
	{
		x = a; 
		y = b; 
	}

	void print() const	// 상수 멤버 함수
	{
		set(1, 2); // ?
		//x = 10; // error

		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{

}