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


	// ������ ������ ���� ������
	Person( Person& p)  // const �� ����.
		: age(p.age), name(p.name) // ��������
	{
		// ���� ��ü�� ���� name �� 0����
		p.name = 0;
	}
};

int main()
{
	Person p1("KIM", 2);

	Person p2 = p1;	// ��ü�� ����.
}




