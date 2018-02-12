/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // STL 의 함수객체

bool cmp(int a, int b) { return a > b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };


	//std::sort(v.begin(), v.end()); // <

	// 1. 일반 함수 사용.
	//std::sort(v.begin(), v.end(), cmp );

	// 2. 함수 객체
	//std::greater<int> g;  // >
	//std::sort(v.begin(), v.end(), g );

	// 3. Lambda Expression - C++11
	std::sort(v.begin(), v.end(),
		[](int a, int b) { return a > b; } );



	for (auto& n : v)
		std::cout << n << ", ";
}

