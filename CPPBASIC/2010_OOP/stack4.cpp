/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

//struct Stack
class Stack
{
//private:
	int buf[10];
	int idx;

public:
	void init() { idx = 0; }
	void push(int n) { buf[idx++] = n; } 
	int  pop() { return buf[--idx]; }
};

int main()
{
	Stack s1;
	s1.init();
	//s1.idx = -1; // error
	
	s1.push(30);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
}





