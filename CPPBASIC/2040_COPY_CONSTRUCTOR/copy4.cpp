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
	Point(int a = 0, int b = 0) : x(a), y(b)
	{
		std::cout << "Point()" << std::endl;
	}
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "Point(Point&)" << std::endl;
	}
};

// copy ellipse
Point foo()
{
	Point pt(1, 2); // ������.

	return pt;	// ���Ͽ� �ӽð�ü ����
				// �ӽð�ü ����.
}

int main()
{
	foo();

	//...
}
