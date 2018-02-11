/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Base
{
public:
	Base()  {} 
	virtual ~Base()
	{
		std::cout << "~Base" << std::endl; 
	}
};

class Derived : public Base
{
public:
	Derived() 
	{
		std::cout << "자원할당" << std::endl;
	}
	virtual ~Derived()
	{
		std::cout << "자원해지" << std::endl;
	}
};
int main()
{
	Base* p = new Derived; // Derived 생성자호출
	delete p;			   // 
}
