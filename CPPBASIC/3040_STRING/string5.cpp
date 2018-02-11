/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> // string.h

class String
{
	char* buff;
	int   size;
public:
	String(const char* s)
	{
		size = strlen(s);
		buff = new char[size + 1];
		strcpy(buff, s);
	}
	~String() { delete[] buff; }


	// 깊은 복사로 구현한 복사 생성자.
	String(const String& s) : size(s.size)
	{
		buff = new char[size + 1];
		strcpy(buff, s.buff);
	}

	String& operator=(const String& s)
	{
		// 자신과의 대입을 조사한다.
		if (&s == this)
			return *this;

		size = s.size;

		delete[] buff;
		buff = new char[size + 1];

		strcpy(buff, s.buff);

		return *this;
	}



	friend std::ostream& operator<<(std::ostream& os,
		const String& s);
};

std::ostream& operator<<(std::ostream& os,
	const String& s)
{
	os << s.buff;
	return os;
}

int main()
{
	String s1 = "apple";
	String s2 = "banana";

	//s1 = s2; // 대입 연산자.

	s1 = s1;

	std::cout << s1 << std::endl;
}
