﻿/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
using namespace std;

class Base
{
	int data;
public:
	Base()      { cout << "Base()"    << endl; }
	Base(int a) { cout << "Base(int)" << endl; }
	~Base()     { cout << "~Base()"   << endl; }
};
class Derived : public Base
{
public:
	Derived()      { cout << "Derived()" << endl; }

	Derived(int a) : Base(a)
	{
		cout << "Derived(int)" << endl;
	}

	~Derived()     { cout << "~Derived()" << endl; }
};

int main()
{
	Derived d(5);
}
