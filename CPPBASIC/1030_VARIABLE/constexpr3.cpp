/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// constexpr3.cpp

int main()
{
//	int ar1[3]; // ok

	int s1 = 3;
//	int ar2[s1]; // error

	const int s2 = 3;
	int ar3[s2];	// ok


	const int s3 = s1;
	//int ar4[s3];	// error

	//foo(n)
}

void foo(const int s)
{
//	int x[s]; // error
}
