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
	std::vector<int> v = { 1,2,3,4,5 };

	// [first, last)
	auto p = std::find(v.begin(), v.end(), 13);

	if (p == v.end())
	{
		std::cout << "검색 실패" << std::endl;
	}

	auto p1 = std::begin(v);

	auto ret = std::find(p1, p1 + 2, 3);

	if (ret == p1 + 2 )
		std::cout << "실패" << std::endl;

	std::find(ret, std::end(v), 3);

}


