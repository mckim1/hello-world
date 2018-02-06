/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : int2type4.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };

// ������ �ν��Ͻ�ȭ : ������ ���� �Լ� ���ø��� ���� C++ �ڵ带 �������� �ʴ´ٴ� ����..
//					 ���� �ڵ尡 �������������Ƿ� �����ϵ� �ȵ�..

template<typename T> void printv_not_pointer(T a)// �����Ͱ� �ƴҶ��� ����� ����
{
	cout << a << endl;
}

template<typename T> void printv_pointer(T a)// ������ �϶��� ����� ����
{
	cout << a << " : " << *a << endl;
}

template<typename T> void printv(T a)
{
	// �ǵ� : false �� ������ ������� �����Ƿ� , �ڵ� �������� �������̴�...
	//       ������.. 
	if (IsPointer<T>::value)
		printv_pointer(a);
	else
		printv_not_pointer(a);

	// ������, if()���� ������ �ð��� false �� �����Ǿ�����.. if()���� �ᱹ ����ð� ��Ŀ���� �̹Ƿ�
	// �����Ϸ��� ������ �Ҷ��� �� 2���� �Լ��� ��� �ʿ��ϴٰ� �Ǵ��ϰ�
	// 2���� ���ø��� ��� ���� �Լ��� ����� �˴ϴ�. 
}

int main()
{
	int n = 3;

	printv(n);
}




