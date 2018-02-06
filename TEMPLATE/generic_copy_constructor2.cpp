/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : generic_copy_constructor2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


#include <iostream>
using namespace std;

template<typename T> class complex
{
	T re;
	T im;
public:
	complex(T a = T(), T b = T()) : re(a), im(b) {}
	
	// ���� ������ ��� 1.
	//complex(const complex<T>&);		// complex<double> c3 = c1; �϶� c1�� �ݵ�� complex<double> �̾�� �Ѵ�.

	// ���� ������ ��� 2.
	//complex(const complex<int>&);		// complex<double> c3 = c1; �϶� c1�� �ݵ�� complex<int> �̾�� �Ѵ�.


	// ���� ������ ��� 3. �Ϲ�ȭ�� ���� ������
	// "U�� T�� ���� �����ϴٸ� complex<U> �� complex<T> �� ���� �����ؾ� �Ѵ�."
	template<typename U> complex(const complex<U>&);		// complex<double> c3 = c1; �϶� c1�� complex<U> �̹Ƿ�, ������ Ÿ���� complex �̴�.

	template<typename> friend class complex;
};

template<typename T> template<typename U>
complex<T>::complex(const complex<U>& c) : re(c.re), im(c.im)
{
}

int main()
{
	complex<int> c1(1, 2); // ok
	complex<int> c2 = c1;  // ok. ���� ������
	complex<double> c3 = c1; // error. c1, c3 �� �ٸ� Ÿ���̴�.!
}