/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Car
{
	int speed;
	int color;
public:
	Car() {}

	void Destroy() { delete this; }
private:
	~Car() {}
};

int main()
{
	//Car c;	// ���� ��ü

	Car* p = new Car; // �� ��ü.
	//delete p;
}