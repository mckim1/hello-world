/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <stdio.h>

namespace Audio
{
	void init()
	{
		printf("Audio init\n");
	}
}

namespace Video
{
	void init()
	{
		printf("Video init\n");
	}
}











// global namespace ( 전역공간)
void init()
{
	printf("System init\n");
}

int main()
{
	init(); // global
	Audio::init();
	Video::init();
}
