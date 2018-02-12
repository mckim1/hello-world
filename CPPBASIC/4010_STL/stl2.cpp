/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <vector>
#include <list>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	int* px = x;
//	++px;
//	*px;

	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	//std::list<int>::iterator p = s.begin();

	auto p = s.begin();

	++p;

	int n = *p;
	std::cout << n << std::endl; // 2


}

