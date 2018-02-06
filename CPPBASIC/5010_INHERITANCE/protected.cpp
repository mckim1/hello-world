/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Base
{
private:
	int a;

protected:
	int b;

public:
	int c;
};
class Derived : public Base
{
public:
	void foo()
	{
		a = 10; // error
		b = 10; // ok
		c = 10; // ok
	}
};

int main()
{
	Base b;
	//b.a = 10; // error
	b.b = 10; // error
	b.c = 10; // ok..
}