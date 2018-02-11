/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */



int operator+*(int a, int b, Complex) 
{
	return a - b; 
}

int main()
{
	Complex c1, c2;

	Complex c3 = c1 + c2; // operator+(c1, c2)
	Complex c4 = c1 + 5;  // operator+(c1, int)
					      // c1.operator+(int)
	Complex c5 = 5 + c1;  // 5.operator+(Complex)
						  // operator+(int, Complex)
}


Complex operator+(const Complex& c, int n )
{
	//...
}

c.operator+();









