/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <cstring>

class Person
{
	char* name;
	int   age;
public:
	Person(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	~Person() { delete[] name; }


	// 소유권 이전의 복사 생성자
	Person( Person& p)  // const 가 없다.
		: age(p.age), name(p.name) // 얕은복사
	{
		// 원래 객체가 가진 name 을 0으로
		p.name = 0;
	}
};

int main()
{
	Person p1("KIM", 2);

	Person p2 = p1;	// 객체의 복사.
}




