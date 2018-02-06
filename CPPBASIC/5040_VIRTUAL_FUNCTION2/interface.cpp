/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// interface.cpp
#include <iostream>

class Camera
{
public:
	void take()
	{
		std::cout << "take picture" << std::endl;
	}
};
class HDCamera
{
public:
	void take()
	{
		std::cout << "take picture2" << std::endl;
	}
};

class People
{
public:
	void useCamera(Camera* p) { p->take(); }
	void useCamera(HDCamera* p) { p->take(); }
};

int main()
{
	People p;
	Camera c1;
	p.useCamera(&c1);

	HDCamera c2;
	p.useCamera(&c2); // ?

}