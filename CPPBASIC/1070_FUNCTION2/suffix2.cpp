/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// suffix2.cpp

template<typename T, typename U> 
//decltype(a + b) Add(T a, U b) 

auto Add(T a, U b) -> decltype(a + b)
{
	return a + b;
}


int main()
{
	Add(1, 2.2 );

//	a = 20;
//	int a = 10;
//	a = 20;
}
