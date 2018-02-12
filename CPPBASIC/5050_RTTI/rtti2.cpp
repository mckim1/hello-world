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
class Dog : public Animal {};
void foo(Animal* p)
{
	if (typeid(*p) == typeid(Dog))
	{
		std::cout << "p는 Dog" << std::endl;
	}
	const std::type_info& t1 = typeid(*p);
	const std::type_info& t2 = typeid(Dog);

	/*
	if (t1 == t2)
	if (t1.hash_code() == t2.hash_code()) // C++11
	if (std::type_index(t1) == std::type_index(t2))
	{
	}
	*/
	std::cout << t1.name() << std::endl;
}

int main()
{
	Animal a; foo(&a);
	Dog d;	  foo(&d);
}











