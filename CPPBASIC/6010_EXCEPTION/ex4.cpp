/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

//void foo() throw(int) // int �� ���� ���ɼ�.
//void foo() throw() // ���ܰ� ����.
//void foo()  // ���ܰ� ������ �ִ�.

//void foo()  // ���ܰ� �ִ�.
//void foo() noexcept(false) // ���ܰ� �ִ�.
//void foo() noexcept(true)  // ���ܰ� ����.

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