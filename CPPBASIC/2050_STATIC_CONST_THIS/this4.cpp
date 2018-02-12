/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



class Test
{
	int data;
public:
	static void foo()
	{
		std::cout << this << std::endl; // error

		//data = 0;	// this->data = 0; error
		//x = a; // this->x = a;
	}
};

int main()
{
	Test::foo(); // 전달할 객체가 없다.

}
