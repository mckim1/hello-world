/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


//#include <iostream>
//using namespace std;

#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		ostream & operator<<(int n)
		{
			printf("%d", n);
			return *this;
		}
		ostream& operator<<(double d)
		{
			printf("%f", d);
			return *this;
		}
	};
	ostream cout;
}

int main()
{
	cout << 3 << 4 ;

	cout << 3;		// cout.operator<<(3)
	cout << 3.4;
}



