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
	friend Complex operator+(const Complex& c1,
						     const Complex&	c2);
};

Complex operator+(const Complex& c1, const Complex& c2)
{
	Complex temp(c1.re + c2.re, c1.im + c2.im);
	return temp;
}

int main()
{
	Complex c1(1, 1);
	Complex c2(2, 2);

	Complex c3 = c1 + c2; // c1.operator+(c2)

	c3.print(); 
}












