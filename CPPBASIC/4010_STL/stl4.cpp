/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. [] 연산자 - list 는 안됨.
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << std::endl;
	}

	// 2. range for
	for (auto& n : v)
		std::cout << n << std::endl;

	// 3. 반복자 사용
	auto p1 = std::begin(v);

	while (p1 != std::end(v))
	{
		std::cout << *p1 << std::endl;
		++p1;
	}

}

