/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : parameter5.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// 3. template paramter

template<typename T> class list {};

template<typename T, template<typename> class C> class stack
{
	//C c; // error, list c
	C<T> c; // ok.. list<int> c
};

int main()
{
	list      s1; // error. list �� Ÿ���� �ƴϰ� ���ø�
	list<int> s2; // ok.    list<int>�� Ÿ��.

	stack<int, list > s3; // ok

}
