/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : class_template_basic2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


#include <iostream>
using namespace std;

// ��� �Լ��� �ܺ� ����
template<typename T> class stack
{
	T* buff;
public:
	void push(const T& a);

	static int count;

	template<typename U> T foo(U a);
};

// Ŭ���� ���ø��� ��� �Լ� ���ø��� �ܺ� �����ϴ� ��� - ������ �������� �߿��մϴ�.
template<typename T> template<typename U> 
T stack<T>::foo(U a)
{
}

// static ��� ������ �ܺ� ����
template<typename T> int stack<T>::count = 0;

// ��� �Լ��� �ܺ� ����
template<typename T> 
void stack<T>::push(const T& a)
{
}


int main()
{
}