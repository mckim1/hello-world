/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

int buf[10];
int idx = 0;


void push(int n)   { buf[idx++] = n; }
int  pop(Stack* s) { return buf[--idx)]; }

int main()
{
	push(10);
	push(20);
	push(30);

	std::cout << pop() << std::endl;
}
