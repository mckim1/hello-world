/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <stdio.h>

namespace Audio
{
	void init()	 { printf("Audio init\n"); }
	void reset() { printf("Audio reset\n"); }
}
using namespace Audio;

void init() { printf("global init\n"); }

int main()
{
	Audio::init(); // ������ �̸��� ����� ����.

	//using Audio::init; // using ����
	//init(); // ok
	//reset();// error

	//using namespace Audio; // using ���þ�
	::init();
	//reset();
}
