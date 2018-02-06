/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : typename.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

class A
{
public:
	//......
	// static int DWORD;
	 typedef int DWORD;
};
int p = 0;

template<typename T> void foo(T a)  // T �� A
{
	// �Ʒ� ������ �ؼ��� ������
	T::DWORD * p; // 1. DWORD�� T�ȿ� �ִ� static ��� �����̴�. �׷���, ���ϱ� p�� �ϰ� �ִ�
				  // 2. DWORD�� T�ȿ� �ִ� ���� Ÿ���̴�. ������ ���� p�� �����ϰ� �ִ�.

	// T�ȿ� ������ Ÿ���� ����Ϸ��� typename�� �ʿ��ϴ�.
	typename T::DWORD * p1;
}

int main()
{
	A a;
	foo(a);
}