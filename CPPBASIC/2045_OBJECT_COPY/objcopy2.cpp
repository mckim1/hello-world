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

	// 1. �����Ͱ� �ƴ� ����� �׳� ����
	Person(const Person& p) : age(p.age)
	{
		//age = p.age;

		// 2. �޸� �Ҵ�
		name = new char[strlen(p.name) + 1];

		// 3. �޸� ������ ����
		strcpy(name, p.name);

	}
};

int main()
{
	Person p1("KIM", 2);

	Person p2 = p1;  // ���� ������
}




