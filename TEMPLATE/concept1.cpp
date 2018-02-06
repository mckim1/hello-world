/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : concept1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

struct Point
{
	int x, y;
};

// T�� < ������ �����ؾ� �Ѵ�.
// ������ : ���� �޼����� �����ϰ� ��µȴ�.
template<typename T> T Min(T x, T y)
{
	return (y < x) ? y : x;
}

int main()
{
	Point p1, p2;
	Min(p1, p2);
}