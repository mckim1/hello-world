/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Animal
{
public:
	int age;
};

class Cat : public Animal {};
class Dog : public Animal {};

void HappyNewYear(Animal* p)
{
	++(p->age);
}

int main()
{
	Dog dog;
	HappyNewYear(&dog);

	Cat cat;
	HappyNewYear(&cat);
	

}
