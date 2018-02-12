/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Test
{
	int data;
public:
	Test* foo() { return this; }

	//Test  goo() { return *this; } // 임시객체 리턴
	Test&  goo() { return *this; }
};

int main()
{
	Test t;

	t.foo()->foo()->foo();

	t.goo().goo().goo();

	std::cout << "A" << "B" << "C";

}
