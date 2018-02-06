/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : IfThenElse2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// bool ����� type selection ���.
template<bool, typename T, typename U> struct IfThenElse
{
	typedef T type;
};

template<typename T, typename U> struct IfThenElse<false, T, U>
{
	typedef U type;
};

template<int N> struct Bit
{
//	using data_type = unsigned int;

	using data_type = typename IfThenElse< (N <= 8), char, unsigned int>::type;

	data_type data;
};

int main()
{
	Bit<8>  b1; // 8bit�� �����ϱ� ���� ��ü
	Bit<32> b2; // 32bit�� �����ϱ� ���� ��ü

	cout << sizeof(b1) << endl;
	cout << sizeof(b2) << endl;
}