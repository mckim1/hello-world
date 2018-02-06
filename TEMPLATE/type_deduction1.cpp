/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : type_deduction1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <typeinfo>
#include <boost/type_index.hpp>
using namespace std;
using namespace boost::typeindex;

// ��Ģ 1. ���ø� ���ڸ� �� Ÿ������ ������
//		   ������ const, volatile, reference �Ӽ��� ��� ���� �ȴ�.
template<typename T> void foo(T a)
{
	--a;

	cout << "T : " << type_id_with_cvr<T>().pretty_name() << endl;
	cout << "a : " << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

int main()
{
	int		n = 10;
	int&    r = n;
	const int c = n;
	const int& cr = c;

	foo(n); // int			T : int		a : int
	foo(r); // int&			T : int		a : int
	foo(c); // const int	T : int     a : int
	foo(cr);// const int&   T : int		a : int

	// ����! ���ڰ� ���� const �Ӽ��� ����
	const int* p1 = &n; // p1�� ���󰡸� const, p1�� const �ƴ�.
	int* const p2 = &n; // p2�� const

	foo(p1);	// T : const int*,    ���⼭�� const�� ������ const�� �ƴ�.
	foo(p2);	// T : int*, ��, const �Ӽ� ����
}
