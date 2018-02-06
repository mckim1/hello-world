/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <string>

// Base(기반), Super
class Person
{
	int age;
	std::string name;
};

// Derived(파생), Sub
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