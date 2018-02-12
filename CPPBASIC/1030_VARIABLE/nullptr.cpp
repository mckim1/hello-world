/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



int main()
{
//	int* p1 = 0;	// 0 은 정수(int)
//	int* p2 = 10;	// error.

	int* p3 = nullptr;

//	int n = nullptr;  // error.

	bool b1 = nullptr; // error. copy 초기화

	bool b2(nullptr);  // ok  direct 초기화
	bool b3{ nullptr }; // ok

}
