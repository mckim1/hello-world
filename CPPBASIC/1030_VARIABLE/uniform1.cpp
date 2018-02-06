/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// uniform1.cpp

struct Point
{
	int x, y;
};

int main()
{
	/*
	int n1 = 0;
	int n2(0); // () 초기화. C++ 에서 지원.
	int x[2] = { 1,2 };
	Point p = { 1,2 };
	*/
	// 일관된 초기화.
	// direct initializaion
	int n1{ 0 };
	int n2{ 0 };
	int x[2]{ 1,2 };
	Point p { 1,2 };

	// copy initializaion
	int n1 = { 0 };
	int n2 = { 0 };
	int x[2] = { 1,2 };
	Point p = { 1,2 };



}
