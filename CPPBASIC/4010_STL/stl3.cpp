/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	//int s[] = { 1,2,3,4,5,6,7,8,9,10 };

	//std::list<int>::iterator p = s.begin();

	//auto p1 = s.begin();
	//auto p2 = s.end(); // 마지막 다음요소.

	auto p1 = std::begin(s);
	auto p2 = std::end(s);


	//*p2 = 10; // runtime error

	while ( p1 != p2 )
	{
		int n = *p1;
		++p1;
	}

}

