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


Point pt(1, 1);

//Point foo()

Point& foo()
{
	std::cout << "foo" << std::endl;
	return pt; // pt�� ���� �ؼ� ���Ͽ� �ӽð�ü����
}

int main()
{
	foo();
	std::cout << "end of main" << std::endl;
}	

// 1. �������� ������
// 2. foo
// 3. ���� ������ - �ӽð�ü
// 4. �Ҹ���      - �ӽð�ü
// 5. end of main
// 6. �������� �Ҹ���