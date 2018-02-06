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
	std::vector<Dog*> v1; // Dog �� ����
	std::vector<Cat*> v2; // Cat �� ����

	std::vector<Animal*> v3; // ��� ��������
}
