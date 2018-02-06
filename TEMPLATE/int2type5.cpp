/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : int2type5.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };

// if ���� ����� �Լ� �б� : ����ð� ����..
// �Լ� �����ε��� ����� �б� : ������ �ð��� ����..

// ���ڷ� �Լ� �����ε��ϴ� ����
template<int N> struct int2type
{
	static const int value = N;
};

template<typename T> void printv_imp(T a, int2type<0>)
{
	cout << a << endl;
}

template<typename T> void printv_imp(T a, int2type<1>)
{
	cout << a << " : " << *a << endl;
}

template<typename T> void printv(T a)
{
	// �Լ� �����ε��� ������ �ð��� ���ڿ� Ÿ������ �Լ� ȣ���� �����ȴ�

	printv_imp(a, int2type< IsPointer<T>::value >());
}

int main()
{
	int n = 3;

	printv(n);
	printv(&n);
}




