/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

// Stack.h
class Stack
{
private:
	int* buf;
	int  idx;
public:
	// 클래스 안에는 멤버함수의 선언만.
	Stack(int sz = 10);
	~Stack();
	void push(int n);
	int  pop();
};

// Stack.cpp
// 멤버 함수 구현은 클래스 외부에.
Stack::Stack(int sz)
{
	buf = new int[sz];
	idx = 0;
}
Stack::~Stack()
{
	delete[] buf; 
}

void Stack::push(int n) 
{
	buf[idx++] = n; 
}
int  Stack::pop() 
{
	return buf[--idx]; 
}



int main()
{
	Stack s1(20);
	s1.push(30);
	std::cout << s1.pop() << std::endl;
}





