/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



// �߻�Ŭ����
class Shape
{
public:
	virtual void Draw() = 0; // ���� �����Լ�
};

// conceret class (��ü Ŭ����)
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