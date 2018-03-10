/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// std3.cpp

#include <stdio.h>
#include <cstdio>

using namespace std;

void foo(int a, int b, int c);
int main()
{
	/*printf("hello\n");
	std::printf("hello\n");
	foo(1,2,3);*/
  const int c = 10;
  int* p = (int*)&c;
  cout << c << endl;
}
void foo (int a, int b, int c) {
	std::printf("hello\n");
}