/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : enable_if.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <type_traits>
using namespace std;

// foo �Լ��� ���� �迭�� ���ؼ��� �ڵ� �����ǰ� �ϰ� �ʹ�.
// ��� 1. static_assert 
// Ư¡ : T�� ������ �ƴϸ� ������ error �߻�.
template<typename T> void foo(T a)
{
	static_assert(is_integral<T>::value, "error");
}

// ��� 2. enable_if
// Ư¡ : T�� ������ �ƴϸ� error�� �ƴ϶� �ڵ� ������ ���� ����. ȣ�� ������ �ٸ� foo()�� ������ ����
// enable_if ��ġ 1. �Լ� ���� Ÿ�Կ� ����
template<typename T> typename enable_if< is_integral<T>::value,void >::type foo(T a)
{
}

// enable_if ��ġ 2. �Լ� ���� Ÿ�Կ� ���� - ������.. 
template<typename T>   
void foo(T a, typename enable_if< is_integral<T>::value, void >::type* p = nullptr )
{
}

// enable_if ��ġ 3. ���ø� ���ڿ� ����
// template<typename T, void* = nullptr >
template<typename T, typename enable_if< is_integral<T>::value, void >::type* = nullptr >
void foo(T a)
{
}

void foo(...) {}

int main()
{
	foo(3);
}

























