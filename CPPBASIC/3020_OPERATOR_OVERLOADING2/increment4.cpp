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
	Integer& operator++()
	{
		++value;
		return *this;
	}

	// 후위형 - 값리턴.
	Integer operator++(int)
	{
		Integer temp = *this;
		//++value;
		++(*this);
		return temp;
	}
};

int main()
{
	Integer n1 = 3;

	Integer n2 = n1++;

	n1.print(); // 4
	n2.print(); // 3

	for (int i = 0; i < 10; i++)
	{

	}
}
