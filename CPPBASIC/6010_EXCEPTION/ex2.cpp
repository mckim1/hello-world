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
		std::cout << "���� �߻�" << std::endl;
	}
	catch (...)
	{
		std::cout << "... ���� �߻�" << std::endl;
	}

	std::cout << "��ӽ���" << std::endl;
}