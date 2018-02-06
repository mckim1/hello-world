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
	Integer operator++()
	{

	}
	// 후위형.
	Integer operator++(int)
	{

	}
};

int main()
{
	Integer n1 = 3; // int

	Integer n2 = ++n1;	// n1.operator++()
	Integer n3 = n1++;  // n1.operator++(int)
 
	n1.print();
}