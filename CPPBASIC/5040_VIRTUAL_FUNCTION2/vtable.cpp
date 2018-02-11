/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Animal
{
	// * vtptr
	int age;
public:
	virtual ~Animal() {}
	virtual void foo() {}
	virtual void goo() {}
};


class Dog : public Animal
{
	int color;
public:
	virtual ~Dog()     {}
	virtual void foo() override {}
};

int main()
{
	Animal a1, a2;
	Dog    d1, d2;
	

	Animal* p = &d1;

	// 1. 컴파일러는 p가 Animal*  라는 사실만 안다.
	// 2. 가상함수 인지 조사.

	p->foo(); // p->vtptr[2]()


	std::cout << sizeof(a1) << std::endl; // 8
										  // 12
}
