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
	Point() //: Point(0,0)
	{
		Point(0, 0); // ������ȣ���� �ƴ϶�
					 // �ӽð�ü ����.
	}

	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p;
	std::cout << p.x << std::endl; // 0
}