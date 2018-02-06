/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Point
{
	int x, y;
public:
	Point()             { x = 0; y = 0; } // 1
	Point(int a, int b) { x = a; y = b; } // 2
};

int main()
{
	Point p1;			// 1
	Point p2(1, 2);		// 2
	Point p3{ 1,2 };	// 3

	Point p4[3];	// 1�� �����ڰ� 3ȸ
	Point p5[3] = { Point(1,1) }; // 2�� 1ȸ, 1�� 2ȸ

	Point* p6; // ������ ȣ��ȵ�.

	// ������ȣ�� �ȵ�.
	//p6 = static_cast<Point*>(malloc(sizeof(Point)));

	//p6 = new Point; // ������ ȣ��.
	p6 = new Point(1,2); // ������ ȣ��.

	delete p6;

}






