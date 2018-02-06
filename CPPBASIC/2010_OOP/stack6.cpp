/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Stack
{
private:
	int* buf;
	int  idx;

public:
	Stack(int sz = 10)
	{
		buf = new int[sz];
		idx = 0; 
	}
	// �Ҹ��� :  ��ü�� �ı��ɶ� �ڵ����� ȣ��.
	~Stack()
	{
		delete[] buf;
	}

	void push(int n) { buf[idx++] = n; }
	int  pop()		 { return buf[--idx]; }
};

int main()
{
	Stack s1(20);
	s1.push(30);
	std::cout << s1.pop() << std::endl;
}





