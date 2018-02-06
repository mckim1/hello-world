/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : integral_constant.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

/*
// C++11���� int2type�� ������Ų �Ʒ� ���ø��� �����մϴ�

template<typename T, T N> struct integral_constant
{
	static constexpr T value = N;
};
//integral_constant<int,   0> n0;
//integral_constant<short, 0> s0;

// true/false           : �������� ��Ÿ���� ��, ���� Ÿ��
// true_type/false_type : �������� ��Ÿ���� Ÿ��, �ٸ� Ÿ��.
typedef integral_constant<bool, true>  true_type;
typedef integral_constant<bool, false> false_type;


// �׸��� is_pointer�� �Ʒ� ó�� ����� �˴ϴ�.
template<typename T> struct is_pointer     : false_type { };
template<typename T> struct is_pointer<T*> : true_type {};
*/

#include <type_traits>  // �� �ȿ� ���ڵ尡 �ֽ��ϴ�.
//------------------------------

template<typename T> void printv_imp(T a, false_type)
{
	cout << a << endl;
}

template<typename T> void printv_imp(T a, true_type)
{
	cout << a << " : " << *a << endl;
}

template<typename T> void printv(T a)
{
	printv_imp(a, is_pointer<T>()); // is_pointer �ӽð�ü ����.
}

int main()
{
	int n = 3;

	printv(n);
	printv(&n);
}








