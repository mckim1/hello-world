/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

int main()
{
	int n = 0;	
	std::cin >> n;

	if (n == 0)
	{

	}
	
	// constexpr : 컴파일 시간
	//if constexpr ( n == 0)  // error

	constexpr int c = 10;

	if constexpr ( c == 10)
	{
	}				

}