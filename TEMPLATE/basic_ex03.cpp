/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : basic_ex03.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T>
T square(T a)
{
	T ret = a * a;
	return ret;
}

int main()
{
	// Ÿ���� ��������� ������ ���
	square<int>(3);
	square<double>(3.3);

	// Ÿ���� �������� ���� ��� - �����Ϸ��� �Լ� ���ڸ� ���ؼ� ����
	square(3);
	square(3.3);
}