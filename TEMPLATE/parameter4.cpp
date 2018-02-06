/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : parameter4.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <typeinfo>
using namespace std;

// non-type(��) parameter
// ������ ���, enum ���, ������, �Լ� ������, ��� �Լ� ������.
// c++17 : auto

template<auto N> struct Test
{
	Test()
	{
		cout << typeid(N).name() << endl;
	}
};

int x = 0;

int main()
{
	Test<10> t1; // N : int�� ��
	Test<&x> t2; // N : int* �� ��.
	Test<&main> t3;  
}

