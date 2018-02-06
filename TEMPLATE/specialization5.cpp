/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : specialization5.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// �ϳ��� ��� �Լ��� Ư��ȭ �ϱ�

// primary template
template<typename T> class Stack
{
public:
	void pop() {}
	void push(T a);
};

template<typename T> void Stack<T>::push(T a)
{
	cout << "T" << endl;
};

// Ư�� ����Լ��� Ư��ȭ �ϴ� �ڵ�
template<> void Stack<char*>::push(char* a)
{
	cout << "char*" << endl;
};

// Ư�� ����Լ��� �κ� Ư��ȭ�� �Ҽ��� ����. 
// �κ� Ư��ȭ�� Ŭ���� ��ü�� �����ؾ� �Ѵ�.
template<> void Stack<T*>::push(char* a)
{
	cout << "char*" << endl;
};

int main()
{
	Stack<int>   s1; s1.push(0);
	Stack<int*>  s1; s2.push(0);
	Stack<char*> s1; s3.push(0);
}