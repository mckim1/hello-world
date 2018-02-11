/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// sptr1.cpp
#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go"   << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

class SPtr
{
	Car* ptr;
public:
	SPtr(Car* p = 0) : ptr(p) {}
	
	~SPtr() { delete ptr; }

	Car* operator->() { return ptr; }
	Car& operator*()  { return *ptr; }
};

int main()
{
	// SPtr의 객체 p가 Car의 포인터 처럼 사용
	// Car* p = new Car;
	SPtr p = new Car; // SPtr p( new Car )

	p->Go(); // p + a : p.operator+(a)
			 // (p.operator->())Go()         
			 // (p.operator->())->Go()  

	(*p).Go(); // p.operator*()
}
