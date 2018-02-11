/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Car
{
	int speed;
public:
	static int cnt;  // 선언(declaration)

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0; // 정의 (definition )


int main()
{
	Car c1, c2;

	std::cout << c1.cnt << std::endl;
}

