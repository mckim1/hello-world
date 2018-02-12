/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// for.cpp
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (auto n : x) // foreach
	{
		std::cout << n << std::endl;
	}

	/*
	for (int i = 0; i < 10; i++)
	{
		std::cout << x[i] << std::endl;
	}
	*/
}
