/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



int main()
{
	const int c = 10;

	//int* p = &c; // error. ����� �ּҴ� 
				 // ������ ����Ű�� �����Ϳ� 
				 // ����������.

	int* p = (int*)&c;

	*p = 20;

}