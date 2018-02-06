/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : thin_template2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// ��� 1. template parameter T�� ������� ���� ��� �Լ��� ��� Ŭ������ �ű���
// ��� �Լ� 2�� * 3�� Ÿ�� + ��� Ŭ���� ��� �Լ� 2�� => 8��

class VectorBase
{
protected:
	int sz;
public:
	int size() const;
	bool empty() const;
};
template<typename T> class Vector : public VectorBase
{
	T* buff;
public:
	void push_front(const T& a);
	T& front();
};

int main()
{
	Vector<int>    v1;
	Vector<short>  v2;
	Vector<double> v3;
}