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
	//Car c;	// 스택 객체

	Car* p = new Car; // 힙 객체.
	//delete p;
}
