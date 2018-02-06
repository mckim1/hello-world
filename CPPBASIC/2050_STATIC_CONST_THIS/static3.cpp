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
	static int cnt;  // ����(declaration)

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0; // ���� (definition )

int main()
{
	// 1. ��ü��� �޸𸮿� ����.
	std::cout << Car::cnt << std::endl;
	
	Car c1, c2;
	int n = sizeof(c1);

	std::cout << c1.cnt << std::endl;
}

