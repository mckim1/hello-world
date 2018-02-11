/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <cstring>
#include <string>

class Person
{
	std::string name;
	int   age;
public:
	Person(std::string n, int a) : name(n), age(a)
	{
	}
};

int main()
{
	Person p1("KIM", 2);

	Person p2 = p1;
}





