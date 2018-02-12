/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Integer
{
	int value;
public:
	Integer(int n = 0) : value(n) {}

	void print() const
	{
		std::cout << value << std::endl;
	}

	// 전위형
	//Integer operator++()
	Integer& operator++()
	{
		++value;
		return *this;
	}
};

int main()
{
	int n = 3;
	++++n; // ok
	std::cout << n << std::endl;


	Integer n1 = 3;

	++++n1;	// ++(++n1) =>
			// (n1.operator++()).operator++()

	n1.print(); // 5
}
