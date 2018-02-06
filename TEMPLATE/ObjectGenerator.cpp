/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : ObjectGenerator.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/
#include <iostream>
#include <utility>
using namespace std;

template<typename T> class complex
{
	T re, im;
public:
	complex() {}
	complex(T r, T i) {}
};

// Ŭ���� ���ø��� ��ü�� ����� �Լ� ���ø�
template<typename T> complex<T> make_complex(const T& a, const T& b)
{
	return complex<T>(a, b);
}


template<typename T> void foo(T a)
{
}

int main()
{
	// 1. ��ü�� ���� ����
	complex<int> c1(1, 2);
	foo(c1);

	// 2. �ӽð�ü�� ����, ������.. C++14 ������ int�� �����Ҽ� ����.!
	foo(complex<int>(1, 2));

	// 3. make �Լ� ���
	foo(make_complex(1, 2));

	foo(pair<int, double>(1, 3.4));
	foo(make_pair(1, 3.4));

}
