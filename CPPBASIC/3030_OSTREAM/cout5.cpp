/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


/*
#include <cstdio>

class ostream
{
public:
	ostream& operator<<(int n)
	{
		printf("%d", n);
		return *this;
	}
	ostream& operator<<(double d)
	{
		printf("%f", d);
		return *this;
	}
	ostream& operator<<(char c)
	{
		printf("%c", c);
		return *this;
	}

	ostream& operator<<(ostream&(*f)(ostream&))
	{
		f(*this); // endl(cout)
		return *this;
	}
};
ostream cout;

ostream& endl(ostream& os)
{
	os << '\n'; // cout << '\n'
	return os;
}
*/
#include <iostream>
using namespace std;

ostream& tab(ostream& os)
{
	os << '\t';
	return os;
}

ostream& menu(ostream& os)
{
	os << "1. 짜장면";
	os << "2. 비빔밥";
	return os;
}

int main()
{
	cout << hex << 10 << endl;

	//cout << '\n';   // const char* endl = '\n';
	cout << endl; // cout.operator<<(endl)
				  // cout.operator<<( 함수포인터)

	cout << tab;
	cout << "A" << tab << "B" << endl;

	cout << menu;
}



