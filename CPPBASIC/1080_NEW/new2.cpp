/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <cstdlib>

int main()
{
	// C style
	int* p1 = (int*)malloc(sizeof(int) * 10);

	free(p1);

	int* p2 = new int; // int �Ѱ� �Ҵ�. 4byte
	delete p2;

	int* p3 = new int[10];
	//delete[] p3;

	delete p3; // undefined( ������ ����)

}