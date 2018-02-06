/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : IsPointer.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


#include <iostream>
using namespace std;

// type traits : ���ø� ���� T�� �پ��� Ư���� ����/��ȭ�ϴ� �پ��� ��Ÿ �Լ�

// ����� ���
// primary template : false ����( value = false )��� �ǹ�.
// �κ� ����ȭ ����  : true ����(value = true)��� �ǹ�



// ����ü(Ŭ����)�ȿ��� =�� �ʱ�ȭ ������ ���

// 1. enum { value = true } : ���� ���� ����
// 2. static const bool value = true; 2000�� ���� ����
// 3. bool value = true;     // C++11�� ��� ������ = �ʱ�ȭ ����.

template<typename T> struct IsPointer
{
	//enum { value = false }; // ���� ��Ÿ��
	//static const bool value = false;  // 
	static constexpr bool value = false;  // C++11��  constexpr ���
};

template<typename T> struct IsPointer<T*>
{
	//enum { value = true };
	//static const bool value = false;
	static constexpr bool value = true;  // C++11��  constexpr ���
};


template<typename T> void foo(const T& a)
{
	if (IsPointer<T>::value)
		cout << "�������Դϴ�." << endl;
	else
		cout << "�����Ͱ� �ƴմϴ�." << endl;
}

int main()
{
	int n = 0;
	foo(n);
	foo(&n);
}


