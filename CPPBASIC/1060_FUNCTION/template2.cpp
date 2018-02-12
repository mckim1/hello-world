/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



template<typename T>
struct Point
{
	T x;
	T y;
};

int main()
{
	Point<int> p1;
	p1.x = 3;

	Point<double> p2;
	p2.x = 3.3;
}
