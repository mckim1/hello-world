/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <cstdlib>

int main()
{
	int* p1 = static_cast<int*>( malloc(100) ); //ok


	int n = 3;
	//double* p2 = static_cast<double*>( &n ); // error
	double* p2 = reinterpret_cast<double*>(&n);//ok


	const int c = 10;
	//int* p3 = static_cast<int*>(&c); // error
	//int* p3 = reinterpret_cast<int*>(&c); // error
	int* p3 = const_cast<int*>(&c); // ok
}