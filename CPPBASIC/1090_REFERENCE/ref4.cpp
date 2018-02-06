/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

struct Data
{
	char data[1000]; // 
};

void foo( const Data&  a) // call by value
{
}

int main()
{
	Data x = 10;
	foo(x);
	std::cout << x << std::endl; // 10
}

void goo(int n)        {}
void goo(const int& n) {}