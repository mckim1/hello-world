/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



//void setAlarm(int h, int m = 0, int s = 0)
/*
void setAlarm(int h, int m = 0, int s) // error
void setAlarm(int h = 0, int m, int s = 0) // error
{

}
*/

void setAlarm(int h, int m = 0 , int s = 0 );

int main()
{
	setAlarm(3, 4, 5);
	setAlarm(3, 4);
}

void setAlarm(int h, int m /*= 0*/, int s /*= 0*/)
{

}
