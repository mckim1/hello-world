/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

int foo() { return -1; }

int main()
{
	/*
	int ret = foo();

	if (ret == -1)
	{
		std::cout << "fail" << std::endl;
	}
	*/
	//-----------------------

	if (int ret = foo(); ret == -1)
	{
		std::cout << "fail" << std::endl;
	}

	switch (int ret = foo(); ret)
	{
	case -1: std::cout << "-1" << std::endl; break;
	}

}

