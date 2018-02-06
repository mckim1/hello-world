/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// Stack.h

class Stack
{

public:
	Stack(int sz = 10);
	~Stack();
	void push(int n);
	int  pop();
private:
	int* buf;
	int  idx;

};
