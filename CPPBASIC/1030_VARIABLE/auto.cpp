/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



int main()
{
	double x[3] = { 1,2,3 };

	auto n1 = x[0];
	auto n2;		// error

	decltype(n1) d1 = n1;
	decltype(n1) d2;   // ok


	decltype(x[0]) d3; // error
}


