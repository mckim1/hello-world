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
	// 소멸자 :  객체가 파괴될때 자동으로 호출.
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





