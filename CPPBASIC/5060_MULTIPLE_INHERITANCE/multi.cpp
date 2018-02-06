/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

struct A 
{
	int a;
};
struct B
{
	int a;
};

struct C : public A, public B
{
	int c;
};
int main()
{
	C c;
	//c.a = 10; // error
	c.A::a = 10;
	c.B::a = 20;
}