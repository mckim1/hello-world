/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : value_type2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> class list
{
public:
	// �����̳ʰ� �����ϴ� Ÿ���� �ܺο� �˷� �ش�.
	typedef T value_type;
	//......
};

list<int> s;
list<int>::value_type n; // n�� �ᱹ int �Դϴ�.