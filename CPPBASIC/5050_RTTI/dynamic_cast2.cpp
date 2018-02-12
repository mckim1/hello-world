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
	// 모든 동물의 공통의 작업..
}

void foo(Dog* p)
{
	foo( static_cast<Animal*>(p)

	// p가 Dog라면 색상도 변경하고 싶다.
}


int main()
{
	Animal a; foo(&a);
	Dog d;	  foo(&d);
}











