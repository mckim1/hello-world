/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <vector>

class Animal
{
public:
	int age;
};
class Cat : public Animal {};
class Dog : public Animal {};

int main()
{
	std::vector<Dog*> v1; // Dog 만 보관
	std::vector<Cat*> v2; // Cat 만 보관

	std::vector<Animal*> v3; // 모든 동물보관
}
