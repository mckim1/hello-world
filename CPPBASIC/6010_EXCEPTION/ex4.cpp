/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

//void foo() throw(int) // int 형 예외 가능성.
//void foo() throw() // 예외가 없다.
//void foo()  // 예외가 있을수 있다.

//void foo()  // 예외가 있다.
//void foo() noexcept(false) // 예외가 있다.
//void foo() noexcept(true)  // 예외가 없다.

void foo()//noexcept        // noexcept(true)
{
	//....	
}
int main()
{
	bool b = noexcept( foo() ); 

	foo();
	std::cout << b << std::endl;
}