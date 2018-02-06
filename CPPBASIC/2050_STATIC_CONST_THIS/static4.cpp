/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Car
{
	int speed;
	//static int limitSpeed;
public:
	static int cnt; 

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0; 

int main()
{
	Car c1, c2;

	std::cout << Car::cnt << std::endl;
	std::cout << c1.cnt   << std::endl;
}

