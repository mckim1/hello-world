/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : IsArray.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;
//			�����̸�    Ÿ��

// int a;		a		int
// int* p;		p		int*
// int x[10];	x		int[10]	=> T[N]

// int[] : ũ�⸦ �˼� ���� �迭 Ÿ��

template<typename T> struct IsArray
{
	static const int size = -1;
	static const bool value = false;
};

template<typename T, int N> struct IsArray<T[N]>
{
	static const int size = N;
	static const bool value = true;
};

template<typename T> void foo(const T& a) // int[10]
{
	if (IsArray<T>::value)   // �� �ڵ带 �����ؼ� IsArray<>����� ������.. 1�� �迭�� ����� ������
		cout << "�迭 �Դϴ�. ũ��� " << IsArray<T>::size << endl;
	else
		cout << "�迭�� �ƴմϴ�." << endl;
}

int main()
{
	int x[10] = { 1,2,3 };
	foo(x);
}


