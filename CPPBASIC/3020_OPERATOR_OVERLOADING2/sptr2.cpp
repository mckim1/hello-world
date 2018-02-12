/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// sptr2.cpp
#include <iostream>

template<typename T> class SPtr
{
	T* ptr;
public:
	SPtr(T* p = 0) : ptr(p) {}
	~SPtr() { delete ptr; }

	T* operator->() { return ptr; }
	T& operator*()  { return *ptr; }
};

int main()
{
	SPtr<int> p1 = new int;
	SPtr<int> p2 = p1; // runtime error
						// 복사 생성자

	*p1 = 10;
	std::cout << *p1 << std::endl;

}
