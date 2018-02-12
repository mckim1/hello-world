/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



int main()
{
	const int c = 10;

	//int* p = &c; // error. 상수의 주소는
				 // 비상수를 가리키는 포인터에
				 // 담을수없다.

	int* p = (int*)&c;

	*p = 20;

}
