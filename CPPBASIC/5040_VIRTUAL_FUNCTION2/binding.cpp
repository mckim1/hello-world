/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Animal
{
public:
	void Cry() { std::cout << "A Cry" << std::endl;	}
};
class Dog : public Animal
{
public:
	void Cry() { std::cout << "D Cry" << std::endl; }
};

int main()
{
	Animal a;
	Dog    d;

	Animal* p = &d;

	//-------------------
	int n;
	std::cin >> n; // 사용자 입력

	if (n == 0)
		p = &a;
	//-------------------
	
	p->Cry();  // C++  : A
			   // java : D
}

