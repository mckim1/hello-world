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
	// Ŭ���� �ȿ��� ����Լ��� ����.
	Stack(int sz = 10);
	~Stack();
	void push(int n);
	int  pop();
};

// Stack.cpp
// ��� �Լ� ������ Ŭ���� �ܺο�.
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





