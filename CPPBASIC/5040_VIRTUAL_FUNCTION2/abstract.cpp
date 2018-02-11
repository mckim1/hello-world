/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



// 추상클래스
class Shape
{
public:
	virtual void Draw() = 0; // 순수 가상함수
};

// conceret class (구체 클래스)
class Rect : public Shape
{
public:
	virtual void Draw() {}
};

int main()
{
	Rect r; 
//	Shape  s; // error
	Shape* p; // ok
}
