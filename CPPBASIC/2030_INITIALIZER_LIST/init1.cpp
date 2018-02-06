/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Point
{
	int x;
	int y;
	const int c;
public:
	Point() : x(0), y(0), c(10) // �ʱ�ȭ ����Ʈ
						 // initializer_list
	{
		//c = 10; // error
		//x = 0;
		//y = 0; // ����
	}
};

int main()
{
	Point p;

	const int c1 = 10; // ok

//	const int c2;  //error
//	c2 = 10;	   // error


//	int n1 = 0; // �ʱ�ȭ
				// �����ڷ� �ʱ�ȭ

//	int n2;		// ������ ȣ��
//	n2 = 0;		// ����. ���Կ����� ȣ��
}