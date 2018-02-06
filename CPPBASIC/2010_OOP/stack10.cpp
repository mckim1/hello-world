/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <stack>  //C++ 표준 stack

int main()
{
	std::stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);

	//int n = s.pop(); // error. pop 제거만. 리턴안됨.

	int n1 = s.top(); // 리턴만. 제거 안됨. 30
	s.pop();
	int n2 = s.top(); // 30

	std::cout << n2 << std::endl; // 30
	
}
