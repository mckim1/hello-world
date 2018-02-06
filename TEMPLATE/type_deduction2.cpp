/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : type_deduction2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <typeinfo>
#include <boost/type_index.hpp>
using namespace std;
using namespace boost::typeindex;

// ��Ģ 2. ���ø� ���ڸ� ���� Ÿ������ ������
//		   ������ reference �Ӽ��� �����ϰ� T�� ����, const, volatile �Ӽ��� ���� �ȴ�.
template<typename T> void foo(T& a)
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

	foo(n); // int			T : int			a : int&
	foo(r); // int&			T : int			a : int&
	foo(c); // const int	T : const int   a : const int&
	foo(cr);// const int&   T : const int	a : const int&


}
