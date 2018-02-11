/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <fstream>

int main()
{
	// ostream cout  ==> basic_ostream<>
	// typedef basic_ostream<char> ostream;
	std::cout << "hello";

	std::ofstream f("a.txt");

	f << "hello"; // a.txt 에 출력.
}

