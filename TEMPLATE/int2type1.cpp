/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : int2type1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

void foo(int    a) {}
void foo(double a) {}

int main()
{
	// Ÿ�Կ� ���� �Լ� �����ε�
	foo(3);		// foo(int) 
	foo(3.4);	// foo(double)

	// ���� ���� �����ε� ?? - 0, 1 �� ���� Ÿ���̹Ƿ� ���� �Լ� ȣ��
	foo(0);	// foo(int)
	foo(1);	// foo(int);
}