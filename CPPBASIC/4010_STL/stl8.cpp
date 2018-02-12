/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


/*
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	std::reverse(v.begin(), v.end());

	for (auto& n : v)
	{
		std::cout << n << ", ";
	}
	std::cout << std::endl;

	std::sort(v.begin(), v.end());

	for (auto& n : v)
	{
		std::cout << n << ", ";
	}
}
*/


#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
	std::vector<int> v{ 1,2,3 };
	std::reverse(std::begin(v), std::end(v));
	for (auto e : v) std::cout << e;
	std::cout << '\n';

	int a[] = { 4, 5, 6, 7 };
	std::reverse(std::begin(a), std::end(a));
	for (auto e : a) std::cout << e;
}



















