/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

class Rect
{
	Point p1;
	Point p2;

	const int c;
	//int& r;
public:
	Rect() : p1(0,0), p2(0,0), c(0) //, r(n)
	{
		//c = 0;
		//p1(0, 0);
	}
};

int main()
{
	Rect r;
}