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
};

int main()
{
	String s1 = "hello"; // String s1("hello")

	/*
	std::cout << s1 << std::endl;

	String s2 = s1; // 복사 생성자

	String s3 = "world";
	s2 = s3;	    // 대입 연산자.
	*/
}