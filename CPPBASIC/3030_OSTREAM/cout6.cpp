/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
using namespace std;

class Complex
{
	int re, im;
public:
	Complex(int r = 0, int i = 0) : re(r), im(i) {}
};

int main()
{
	Complex c(1, 1);

	cout << c; // cout.operator<<(c)
			   // cout.operator<<(Complex)
			   // operator<<( cout, c)

}












