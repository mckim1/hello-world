/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Test
{
	int data = 0;
public:
	const int* getPointer() const { return &data; }
	
	void foo() { std::cout << "1" << std::endl; }
	void foo() const
	{
		std::cout << "2" << std::endl; 
	}

	void goo() const;
};

void Test::goo() const
{

}

int main()
{
	Test t1;
	t1.foo();	// 1, 없으면 2번

	const Test t2;
	t2.foo();	// 2. 없으면 error

}
