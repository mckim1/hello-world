/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : using_traits.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// type_traits�� ����ϴ� ���
#include <type_traits>     // �� ����� �ʿ��ϰ�!

template<typename T> void goo(T a, true_type) { cout << "������" << endl; }
template<typename T> void goo(T a, false_type) { cout << "������ �ƴ�" << endl; }

template<typename T> void foo(T a)
{
	// 1. traits<T>::value�� ����ϴ� ��� - �ᱹ if��
	//    ���� : �������϶��� "*a" ���� ǥ������ ����Ҽ� ����. if���� ����ð� �б⹮�̹Ƿ�!!
	if (is_pointer<T>::value)
		cout << "������" << endl; // *a ���� ǥ���� ����Ҽ� ����.
	else
		cout << "������ �ƴ�" << endl;


	// 2. �Լ� �����ε� ��� - ������ �ð� �б⹮, ������ �϶� *a ���� ǥ�� ��밡��

	goo(a, is_pointer<T>());
}




int main()
{
	int n = 10;
	foo(n);
	foo(&n);
}





