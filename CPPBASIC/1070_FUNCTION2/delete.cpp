/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



void foo(int a) {}


//void foo(double a); // 선언만. {}

void foo(double a) = delete; // 함수 삭제.

int main()
{
	foo(3.4);
}
