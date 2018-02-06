/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : remove_pointer1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// T�� ���� Ÿ�� ���ϱ�
// primary template : typedef ����
template<typename T> struct xremove_pointer
{
	typedef T type;
};

template<typename T> struct xremove_pointer<T*>
{
	typedef T type;
};

template<typename T> void foo(T a)  // T : int*
{
	// �ݵ�� typename �־�� �մϴ�.
	typename  xremove_pointer<T>::type n;  

	// n�� Ÿ�� �̸� ���
	cout << typeid(n).name() << endl;
}

int main()
{
	int n = 10;
	foo(&n);
}

