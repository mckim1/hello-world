/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : instantiation2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> T square(T a)
{
	T ret = a * a;
	return ret;
}

int main()
{
	int n = 3;
	short s = 3;

	// code bloat : "�ڵ�޸𸮰� �����ϴ� ����"
	square(n);
	square(s);

	square<int>(n);
	square<int>(s);
}