/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <set>
#include <functional>

int main()
{
	std::set<int, std::greater<int> > s; // tree

	s.insert(10);	//  <
	s.insert(30);
	s.insert(20);


	for (auto& n : s)
		std::cout << n << ", ";
}
