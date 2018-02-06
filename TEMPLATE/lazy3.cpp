/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : lazy3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// if ���� ����ð� ���� �б� ���̴�.
// �Լ� �����ε��� ������ �ð� �б⹮�̴�
// if constexpr ���� �����Ͻð� ���� �б� ���̴�.

template<typename T> void foo(T a, int n)
{
	*a = 10;
}

template<typename T> void foo(T a, double d)
{
}

int main()
{
	foo(0, 3.4); // �Լ� �����ε��� ���� �Լ� ������ ������ �ð��� ����. foo(T, int)�� �������� �����Ƿ� C++ �ڵ�� �����ȵ�.

	// �Ʒ� ó�� ����� ���. foo( T, int) �� ���ȴٰ� �Ǵ��ϹǷ� error.
	if (false)
		foo(0, 1);
	else
		foo(0, 3.4);

	// ������ �Ʒ� ó�� �ϸ� error. ����.
	if constexpr(false)
		foo(0, 1);
	else
		foo(0, 3.4);
}

