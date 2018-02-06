/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

int main()
{
	//const int c = 10; // ������ �ð� ���
						//

	int n = 10;
	const int c = n;	// ����ð� ���

	//int* p = &c;	// error

	int* p = (int*)&c;	// ok..

	*p = 20;

	std::cout << c  << std::endl;	// 10  20
	std::cout << *p << std::endl;	// 20  20
}