/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// std3.cpp

//#include <stdio.h>
#include <cstdio>
/*
// cstdio 의 원리
#include <stdio.h> // printf가 전역에 있다.

namespace std
{
	using ::printf;
}
*/
//---------------------------
void foo(int a, int b, int c);
int main()
{
	printf("hello\n");
	std::printf("hello\n");
	foo(1,2,3);
}
void foo (int a, int b, int c) {
	std::printf("hello\n");
}