/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



int main()
{
	int n = 0;

	n = 10;

	const int c = 10;
	c = 20; // error

	constexpr int c2 = 10;
	c2 = 20; // error


	const int c3 = n; // ok
	constexpr int c4 = n; // error

}
