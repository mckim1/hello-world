/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <typeinfo>

class Animal
{
public:
	virtual ~Animal() {}
};
class Dog : public Animal
{
public:
	int color;
};

void foo(Animal* p)
{
	if (typeid(*p) == typeid(Dog))
	{
		Dog* pDog = static_cast<Dog*>(p);
	}

	// 혹시 p가 Dog 라면 color
	//p->color = 10; // error
	//Dog* pDog = static_cast<Dog*>(p);

	Dog* pDog = dynamic_cast<Dog*>(p);
	std::cout << pDog << std::endl;
}

int main()
{
	Animal a; foo(&a);
	Dog d;	  foo(&d);
}











