/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Animal
{
protected:
	Animal() {}
};

class Dog : public Animal
{
public:
};

int main()
{
	// 다음중 에러를 모두 골라 보세요
	//Animal a; // error
	Dog    d; // ok..
}
