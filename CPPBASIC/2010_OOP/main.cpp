/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// main.cpp
#include <iostream>
#include "stack.h"	// Ŭ���� ���� ����

int main()
{
	Stack s1(20);
	s1.push(30);
	std::cout << s1.pop() << std::endl;
}