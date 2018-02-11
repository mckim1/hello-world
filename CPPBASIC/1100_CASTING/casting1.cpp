/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// casting1.cpp
#include <cstdlib>

int main()
{
	//int* p = (int*)malloc(100);

	int* p = static_cast<int*>( malloc(100) );


}
