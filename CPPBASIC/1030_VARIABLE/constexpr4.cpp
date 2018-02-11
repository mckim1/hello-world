/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


int main()
{
	int n = 10;

	const int c1 = 10;		// ok
	const int c2 = n;		// ok

	constexpr int c1 = 10; // ok
	constexpr int c2 = n;  // error

}
