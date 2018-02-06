/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : xtuple2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// Step 2. �ϳ��� ���� �����Ҽ� �ֵ��� �κ� Ư��ȭ
template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;
};

template<typename T, typename ... Types> struct xtuple<T, Types...>
{
	T value;
	xtuple() = default;
	xtuple(const T& a) : value(a) {}

	static constexpr int N = 1;
};


int main()
{
	xtuple<>		          t0;
	xtuple<int, char, double> t3(3);
}