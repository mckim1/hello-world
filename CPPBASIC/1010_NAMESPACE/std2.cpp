/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// std2.cpp

void foo()
{
}

namespace Audio
{
	using ::foo;

	void init() {}
}

int main()
{
	Audio::init(); // ok
	foo();  // ok

	Audio::foo(); // ?

}
