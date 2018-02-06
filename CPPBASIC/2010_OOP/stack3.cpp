/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

struct Stack
{
	int buf[10];	// ��� ����Ÿ
	int idx;

	void push(int n) { buf[idx++] = n; } // ��� �Լ�
	int  pop() 	     { return buf[--idx];	}
};

int main()
{
	Stack s1, s2;
	s1.idx = -1;
	s2.idx = 0;

	//push(&s1, 10); // �Լ� �߽�.
	s1.push(30);	 // ��ü �߽�.
	s1.push(20); // push(&s1, 20)

	std::cout << s1.pop() << std::endl;
}