/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// interface2.cpp
#include <iostream>



// ����� ī�޶������ ��Ģ��������.
// ��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ��Ǿ�� �Ѵ�.

// ���� ���̽�..

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

// ��� ī�޶�� ��Ģ�� ���Ѿ� �Ѵ�.
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