/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <cstring>
#include <mutex>  //

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

	// 복사 생성자 삭제..
	Person(const Person&) = delete;
};

int main()
{
	std::mutex m1;
	std::mutex m2 = m1;

//	Person p1("KIM", 2);
//	Person p2 = p1; // 컴파일 에러를 발생해 보자.
}






