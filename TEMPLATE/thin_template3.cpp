
/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : thin_template3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


// ��� 2. void* ��� �����̳� + ĳ������ å������ �Ļ� Ŭ����
// ��� �Լ� 2�� * 3�� Ÿ�� + ��� Ŭ���� ��� �Լ� 2�� => 8��

class VectorBase
{
protected:
	void* buff;
	int sz;
public:
	int size() const;
	bool empty() const;

	void  push_front(const void* a);
	void* front();
};

// ĳ���ø� å������ �Ļ� Ŭ����
template<typename T> class Vector : public VectorBase
{
public:
	inline int size() const   { return VectorBase::size(); }
	inline bool empty() const { return VectorBase::empty(); }
	inline void push_front(const T& a) { VectorBase::push_front(static_cast<void*>(a)); }
	inline T& front() { return static_casst<T&>(VectorBase::front());	}
};

int main()
{
	Vector<int>    v1;
	Vector<short>  v2;
	Vector<double> v3;
}