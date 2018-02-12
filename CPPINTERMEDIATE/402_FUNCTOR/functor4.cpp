﻿/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Intermediate
* Copyright (C) 2018 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <algorithm>
using namespace std;

// 함수 객체는 자신만의 타입이 있다.
// signature가 동일 해도 모든 함수객체는 다른 타입이다.

struct Less
{
	inline bool operator()(int a, int b) const  {	return a < b; }
};

struct Greater
{
	inline bool operator()(int a, int b) const { return a > b;	}
};

//void Sort(int* x, int n, bool(*cmp)(int, int))

//void Sort(int* x, int n, Less cmp )

// 정책 변경가능하고 정책이 인라인 치환되는 함수. ( 템플릿 + 함수 객체)
template<typename T> void Sort(int* x, int n, T cmp)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (cmp(x[i], x[j]))
				swap(x[i], x[j]);
		}
	}
}
int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Less	f1; // 타입 Less
	Greater f2; // 타입 Greater
	Sort(x, 10, f1); //
	Sort(x, 10, f2); //
}
