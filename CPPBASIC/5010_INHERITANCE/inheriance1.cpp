/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <string>

// Base(���), Super
class Person
{
	int age;
	std::string name;
};

// Derived(�Ļ�), Sub
class Student : public Person
{
	int id;
};

class Professor : public Person
{
	int major;
};

int main()
{
}