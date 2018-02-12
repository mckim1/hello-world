/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

int add(int a, int b)
{
	return a + b;
}

struct Plus
{

	int operator()(int a, int b)
	{
		return  a + b;
	}
};

int main()
{
	Plus p;
	int n = p(1, 2); // 함수 처럼 사용
			// p.operator()(1,2)

	std::cout << n << std::endl;
	// a + b; // a.operator+ (b)
	// a - b; // a.operator-(b)
	// a();	  // a.operator()()
	// a(1, 2);//a.operator()(1,2);
}
