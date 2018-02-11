/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// ref8.cpp

int main()
{
	int v1 = 0, v2 = 0;

	v1 = 10; // ok
	10 = v1; // error
	v2 = v1;


	// lvalue reference
	int& r1 = v1; // ok
	int& r2 = 10; // error.

	const int& r3 = v1; // ok
	const int& r4 = 10; // ok.

	// rvalue reference
	int&& r5 = v1;	// error
	int&& r6 = 10;	// ok.


}
