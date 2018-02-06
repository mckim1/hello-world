/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Stack
{
private:
	int buf[10];
	int idx;

public:
	// 클래스 이름과 동일한 함수 : 생성자
	Stack()          { idx = 0; }
	void push(int n) { buf[idx++] = n; }
	int  pop()       { return buf[--idx]; }
};

int main()
{
	Stack s1;
	//s1.init();
	s1.push(30);

	std::cout << s1.pop() << std::endl;
}





