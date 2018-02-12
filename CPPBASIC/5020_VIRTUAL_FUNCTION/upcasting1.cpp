/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// upcasting1.cpp
#include <string>

class Animal
{
public:
	int age;
	std::string name;
};
class Dog : public Animal
{
public:
	int color;
	int getColor() const { return color; }
};

int main()
{
	Dog dog;

	//int* p = &dog; // error. reinterpret_pret

	Animal* p = &dog; // ok.. upcasting
	Animal& r = dog;  // ok
}
