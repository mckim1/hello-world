/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// inline1.cpp 

int Add1(int a, int b) 
{
	return a + b; 
}
inline int Add2(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 1, b = 2;

	int n1 = Add1(a, b);
	int n2 = Add2(a, b);
	//int n3 = Add2(a, b);

}
