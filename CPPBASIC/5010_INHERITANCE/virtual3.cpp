/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Base
{
public:
	Base()  {} 
	virtual ~Base()
	{
		std::cout << "~Base" << std::endl; 
	}
};

class Derived : public Base
{
public:
	Derived() 
	{
		std::cout << "�ڿ��Ҵ�" << std::endl;
	}
	virtual ~Derived()
	{
		std::cout << "�ڿ�����" << std::endl;
	}
};
int main()
{
	Base* p = new Derived; // Derived ������ȣ��
	delete p;			   // 
}