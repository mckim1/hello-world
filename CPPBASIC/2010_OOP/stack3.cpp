/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

struct Stack
{
	int buf[10];	// 멤버 데이타
	int idx;

	void push(int n) { buf[idx++] = n; } // 멤버 함수
	int  pop() 	     { return buf[--idx];	}
};

int main()
{
	Stack s1, s2;
	s1.idx = -1;
	s2.idx = 0;

	//push(&s1, 10); // 함수 중심.
	s1.push(30);	 // 객체 중심.
	s1.push(20); // push(&s1, 20)

	std::cout << s1.pop() << std::endl;
}
