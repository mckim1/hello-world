/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// casting5.cpp

int main()
{
	const int c = 10;

	//double* p = (double*)&c; // ok

	//double* p = static_cast<double*>(&c); // error

	double* p = reinterpret_cast<double*>(
					const_cast<int*>(&c) );
}

