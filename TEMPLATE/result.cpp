/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : result_using_variadic_template.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/
#include <iostream>
using namespace std;


int f(int a, double b) { return 0; }


// ���� ���� ���ø� ����� ����ؼ� �Լ��� ���� Ÿ���� ���ϴ� �ڵ� �Դϴ�.
template<typename T> struct result
{
	typedef T type;
};

template<typename R, typename ... Types> struct result<R(Types...)>
{
	typedef R type;
};

template<typename T> void foo(T& a) // ���⼭ T�� int(int, double) Ÿ���Դϴ�.
{
	typename result<T>::type n;  

	cout << typeid(n).name() << endl;  // int �� ���;� �մϴ�.
}

int main()
{
	foo(f);
}