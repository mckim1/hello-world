/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

int cnt = 0;

class Car
{
	int speed;
	//int cnt = 0;
public:
	Car()  { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1, c2;

	cnt = -1;
}

