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
	int*  ref; // ������� �޸��� �ּ�
public:

	Person(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);

		ref = new int;
		*ref = 1;
	}


	~Person()
	{
		if (--(*ref) == 0)
		{
			delete[] name;
			delete ref;
		}
	}

	// ��� ����� ���� ���� �Ѵ�.
	Person(const Person& p)
		: name(p.name), age(p.age), ref(p.ref)
	{
		++(*ref); // ���� ��� ����
	}
};

int main()
{
	Person p1("KIM", 2);

	Person p2 = p1;  // ���� ������.
	
}




