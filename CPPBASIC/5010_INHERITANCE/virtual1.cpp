/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Animal
{
public:
	// ���� �Լ�
	virtual void Cry()
	{
		std::cout << "Animal Cry" << std::endl;
	}
};
class Dog : public Animal
{
public:
	// �Լ� �������̵�(override )
	virtual void Cry()
	{
		std::cout << "Dog Cry" << std::endl;
	}
};
int main()
{
	Animal a; a.Cry(); // Animal Cry
	Dog    d; d.Cry(); // Dog Cry

	Animal* p = &d;
	p->Cry(); // A Cry() ?  D Cry()
			  // C++ A Cry()
			  // Java  D Cry()
}





