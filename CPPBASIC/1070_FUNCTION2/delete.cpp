/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



void foo(int a) {}


//void foo(double a); // ����. {}

void foo(double a) = delete; // �Լ� ����.

int main()
{
	foo(3.4);
}