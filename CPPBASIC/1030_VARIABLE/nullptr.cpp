/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



int main()
{
//	int* p1 = 0;	// 0 �� ����(int)
//	int* p2 = 10;	// error.

	int* p3 = nullptr;

//	int n = nullptr;  // error.

	bool b1 = nullptr; // error. copy �ʱ�ȭ

	bool b2(nullptr);  // ok  direct �ʱ�ȭ
	bool b3{ nullptr }; // ok
	
}