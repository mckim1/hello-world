
/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : thin_template1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// ��� �Լ� 4�� * 3�� Ÿ�� => 12�� �Լ� ����
template<typename T> class Vector
{
	T* buff;
	int sz;
public:
	int size() const;
	bool empty() const;
	void push_front(const T& a);
	T& front();
};

int main()
{
	Vector<int>    v1;
	Vector<short>  v2;
	Vector<double> v3;
}