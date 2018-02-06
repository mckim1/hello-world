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

	void print() const
	{
		cout << re << ", " << im << endl;
	}
};

int main()
{
	int n = 3 + 4; // ok

	Complex c1(1, 1);
	Complex c2(2, 2);
	Complex c3 = c1 + c2; // c1.operator+(c2)
						  // operator+(c1, c2)
}
