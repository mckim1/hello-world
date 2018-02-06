/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// std1.cpp
#include <stdio.h>
#include <algorithm>

int count = 0;

int main()
{
	int n = std::min(1, 2); // 1

	count = 20;
}

/*
//----------------------------
#include <algorithm>
using std::min;

int main()
{
	int n1 = min(1, 2); // 1
	int n2 = max(1, 2); // error
}
*/
//--------------------------
/*
#include <algorithm>
using namespace std; // std::count() 함수가 있다

int count = 0;

int main()
{
	int n1 = min(1, 2); // 1
	int n2 = max(1, 2); // ok

	count = 20;
}
*/