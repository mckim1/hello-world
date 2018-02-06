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
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b)  { x = a; y = b;	}

	void print() const;
};

int main()
{
	const Point p(1, 2); // ��� ��ü
	//p.x = 10;		// error	
	//p.set(10, 20);	// error
	p.print();		// error
		// "�����ü�� ��� ��� �Լ��� ȣ�Ⱑ��"
}



void Point::print() const
{
	std::cout << x << ", " << y << std::endl;
}







/*
void Point::print() 
{
	std::cout << x << ", " << y << std::endl;
}
*/
