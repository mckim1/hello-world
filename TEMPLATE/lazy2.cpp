/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : lazy2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> void foo(T a)
{
	*a = 10;
}

int main()
{
	//foo(0); // error

	if (false)	// if���� ����ð� ���ǹ��̹Ƿ�
		foo(0);	// �����Ͻÿ� �� �ڵ�� ���ȴٰ� �Ǵ�.

	if constexpr(false) // C++17 static-if ����
		foo(0);

}