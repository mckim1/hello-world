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

	// friend �Լ� : ��� �Լ��� �ƴ�����
	//				private ���ٰ���.
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