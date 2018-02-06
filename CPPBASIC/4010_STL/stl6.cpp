/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	//s.find(3);
	//v.find(3);

	// std::list<int>::iterator p
	auto p1 = std::find(s.begin(), s.end(), 3);
	auto p2 = std::find(v.begin(), v.end(), 3);

	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl;


}


