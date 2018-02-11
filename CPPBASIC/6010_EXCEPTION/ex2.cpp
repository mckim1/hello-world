/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

int foo()
{
	if (1)
		throw 1;

	return 0;
}

int main()
{
	try
	{
		foo();
	}
	catch (int n)
	{
		std::cout << "예외 발생" << std::endl;
	}
	catch (...)
	{
		std::cout << "... 예외 발생" << std::endl;
	}

	std::cout << "계속실행" << std::endl;
}
