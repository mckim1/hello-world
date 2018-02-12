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
	std::list<int> s   = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	auto p1 = std::begin(s);
	auto p2 = std::begin(v);

	++p1;
	++p2;

	int n1 = *p1;
	int n2 = *p2;
}

