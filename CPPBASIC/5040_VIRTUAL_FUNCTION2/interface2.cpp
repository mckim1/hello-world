/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// interface2.cpp
#include <iostream>



// 사람과 카메라사이의 규칙설계하자.
// 모든 카메라는 아래 클래스로 부터 파생되어야 한다.

// 인터 페이스..

#define inteface struct

inteface ICamera
{
	virtual void take() = 0;
	virtual ~ICamera() {}
};




class People
{
public:
	void useCamera(ICamera* p) { p->take(); }
};

// 모든 카메라는 규칙을 지켜야 한다.
class Camera : public ICamera
{
public:
	void take()
	{
		std::cout << "take picture" << std::endl;
	}
};

class HDCamera : public ICamera
{
public:
	void take()
	{
		std::cout << "take picture2" << std::endl;
	}
};

class UHDCamera : public ICamera
{
public:
	void take()
	{
		std::cout << "take picture3" << std::endl;
	}
};

int main()
{
	People p;
	Camera c1;
	p.useCamera(&c1);

	HDCamera c2;
	p.useCamera(&c2); // ?

	UHDCamera c3;
	p.useCamera(&c3); // ?
}
