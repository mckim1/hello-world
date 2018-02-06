/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : class_template_basic1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// stack    : template 
// stack<T> : type
template<typename T> class stack
{
	T* buff;
public:

	void goo(stack s) {} // ok..   ��� �Լ��ȿ��� stack �� stack<T> �� ����.
};

void foo(stack s) {} // error

int main()
{
	stack      s1; // error. stack �� type �� �ƴϰ�, template �̴�.
	stack<int> s2; // ok.    stack<int> �� Ÿ��..
}