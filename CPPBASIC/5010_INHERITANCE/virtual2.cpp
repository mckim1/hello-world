/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Animal
{
public:
	virtual void Cry() {}
};

class Dog : public Animal
{
public:
	virtual void Cry() override;
};

void Dog::Cry() 
{
}

int main()
{	
	Dog d;
	Animal* p = &d;

	p->Cry(); // Cry()�� �����Լ� ��� 
			  // Dog �� Cry() ȣ��
}





