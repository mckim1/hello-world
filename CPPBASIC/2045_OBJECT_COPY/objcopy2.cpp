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

	// 1. 포인터가 아닌 멤버는 그냥 복사
	Person(const Person& p) : age(p.age)
	{
		//age = p.age;

		// 2. 메모리 할당
		name = new char[strlen(p.name) + 1];

		// 3. 메모리 내용을 복사
		strcpy(name, p.name);

	}
};

int main()
{
	Person p1("KIM", 2);

	Person p2 = p1;  // 복사 생성자
}




