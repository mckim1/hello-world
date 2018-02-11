/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

struct Stack
{
	int buf[10];
	int idx;


};

void push(Stack* s, int n) 
{ 
	s->buf[(s->idx)++] = n;
}
int  pop(Stack* s )
{ 
	return s->buf[--(s->idx)]; 
}

int main()
{
	Stack s1, s2;
	s1.idx = 0;
	s2.idx = 0;

	push(&s1, 10);
	push(&s1, 20);
	push(&s1, 30);

	std::cout << pop(&s1) << std::endl;
}
