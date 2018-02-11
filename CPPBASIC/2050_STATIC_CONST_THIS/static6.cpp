/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


class Test
{
	int data1;
	static int data2;
public:
	void f1()	// 호출하려면 반드시 객체가 필요
	{
		data1 = 0;	// 1
		data2 = 0;	// 2
	}
	static void f2()	// 객체없이 호출.
	{
		//data1 = 0;	// 3. error
		data2 = 0;	// 4. ok.
	}

	static void f3(); // 선언..
};
int Test::data2 = 0;

void Test::f3()
{

}

int main()
{
	Test::f2(); // ok

}

