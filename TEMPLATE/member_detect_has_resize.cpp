/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : member_detect_has_resize.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <vector>
#include <array>
#include <type_traits>
using namespace std;

template<typename T> struct has_resize
{
	using YES = char;
	using NO = short;

	// ������ : UŸ���� ��ü�� ����Ʈ �����ڰ� ������ ��� �ɱ�� ?
	template<typename U> static YES check(typename std::add_pointer<decltype(U().resize(0))>::type  a);
	template<typename U> static NO  check(...);

	static constexpr bool value = (sizeof(check<T>(0)) == sizeof(YES));
};

int main()
{
	cout << has_resize<vector<int>>::value << endl;     // 1
	cout << has_resize<array<int, 10>>::value << endl;  // 0
}













