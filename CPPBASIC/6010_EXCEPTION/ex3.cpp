/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <exception>

class MemoryException : public std::exception
{
public:
	virtual const char* what() const noexcept
	{
		return "메모리 예외";
	}
};

int foo()
{
	if (1)
		throw MemoryException();

	return 0;
}

int main()
{
	try
	{
		foo();
	}
	catch (MemoryException& e)
	{
		std::cout << e.what() << std::endl;
	}
}
