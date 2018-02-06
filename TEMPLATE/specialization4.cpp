/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : specialization4.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// partial specialization �� default parameter
template<typename T, int N = 10> class Stack
{
	T buf[N];
};

// �κ� Ư��ȭ - �������� ǥ�� ���� �ʴ´�. ǥ������ �ʾƵ� primary ���� ����ȴ�.
template<typename T, int N> class Stack<T*, N>
{
	T buf[N];
};

int main()
{
	Stack<int> s1;  // N == 10
	Stack<int*> s2; // N == 10
}