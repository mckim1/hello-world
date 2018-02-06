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

	// 만들면서 리턴하자. RVO
	// 임시객체로 리턴
	//return Point(1, 1);
}

int main()
{
	foo();
	std::cout << "end of main" << std::endl;
}


// 1. 지역변수 pt 생성자
// 2. foo
// 3. 복사 생성자 - 임시객체
// 4. 지역변수 pt 소멸자
// 4. 소멸자      - 임시객체
// 5. end of main
