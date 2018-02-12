/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


struct X
{
	int x;
};
struct A : virtual public  X
{
	int a;
};
struct B : public virtual X
{
	int b;
};
struct C : public A, public B
{
	int c;
};
int main()
{
	C c;
	c.x = 10; //
//	c.A::x = 10; //
//	c.B::x = 10; //
}



