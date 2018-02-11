/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Car
{
	int speed;
	static int cnt;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	static int getCount() { return cnt; }
};
int Car::cnt = 0;

int main()
{
	std::cout << Car::getCount() << std::endl;

	Car c1, c2;

	std::cout << c1.getCount() << std::endl;
}

