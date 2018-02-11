/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



//struct Bike
class Bike
{
//	private int a;
//	private int b;
//private:
	int gear;
	int aa;
public:
	void changeGear(int n)
	{
		if( n > 0 )
			gear = n;
	}
};

int main()
{
	Bike b;
	//b.gear = -10;
	b.changeGear(-10);
}
