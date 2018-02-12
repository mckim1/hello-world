/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Point
{
	int x;
	int y;
	const int c;
public:
	Point() : x(0), y(0), c(10) // 초기화 리스트
						 // initializer_list
	{
		//c = 10; // error
		//x = 0;
		//y = 0; // 대입
	}
};

int main()
{
	Point p;

	const int c1 = 10; // ok

//	const int c2;  //error
//	c2 = 10;	   // error


//	int n1 = 0; // 초기화
				// 생성자로 초기화

//	int n2;		// 생성자 호출
//	n2 = 0;		// 대입. 대입연산자 호출
}
