/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <functional>
/*
template<typename T> struct Plus
{
	T operator()(T a, T b)
	{
		return  a + b;
	}
};
*/

int main()
{
	std::plus<int> p;
	int n = p(1, 2);

}
