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

	friend ostream& operator<<(ostream&,
							   const Complex&);
};

ostream& operator<<(ostream& os, const Complex& c)
{
	// 상수객체는 상수 멤버만 호출가능하다.
	//os.operator<<(3);
	os << c.re << ", " << c.im;
	return os;
}

int main()
{
	Complex c(1, 1);

	cout << c << endl; // operator<<( cout, c)

}












