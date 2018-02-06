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


Point foo()
{
	Point pt(1, 1);
	std::cout << "foo" << std::endl;
	return pt;  // /O2

	// ����鼭 ��������. RVO
	// �ӽð�ü�� ����
	//return Point(1, 1);
}

int main()
{
	foo();
	std::cout << "end of main" << std::endl;
}


// 1. �������� pt ������
// 2. foo
// 3. ���� ������ - �ӽð�ü
// 4. �������� pt �Ҹ���
// 4. �Ҹ���      - �ӽð�ü
// 5. end of main
