/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Animal
{
protected:
	Animal() {}
};

class Dog : public Animal
{
public:
};

int main()
{
	// ������ ������ ��� ��� ������
	//Animal a; // error
	Dog    d; // ok..
}
