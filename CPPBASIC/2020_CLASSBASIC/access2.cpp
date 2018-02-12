/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Bike
{
private:
	int gear;

public:
	//int getGear() { return gear; }
	void changeGear(int n) { gear = n;	}

	// friend 함수 : 멤버 함수가 아니지만
	//				private 접근가능.
	friend void fixBike();

//	friend class AAA;
};

void fixBike()
{
	Bike b;
	b.gear = 0;
}

int main()
{
}
