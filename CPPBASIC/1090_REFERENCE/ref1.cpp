/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

int main()
{
	int n = 10;// �޸� �Ҵ�

	int* p = &n;

	int& r = n;	// r�� reference ����.
	
	r = 20;

	std::cout << &n << std::endl; 
	std::cout << &r << std::endl; 
	std::cout << n << std::endl; // 20

	//int& r2; // error.
}