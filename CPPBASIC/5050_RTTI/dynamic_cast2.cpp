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
	// ��� ������ ������ �۾�..
}

void foo(Dog* p)
{
	foo( static_cast<Animal*>(p)

	// p�� Dog��� ���� �����ϰ� �ʹ�.
}


int main()
{
	Animal a; foo(&a);
	Dog d;	  foo(&d);
}











