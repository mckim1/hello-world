/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <string.h>  // <cstring>
#include <string>

int main()
{
	//char s1[] = "hello";
	//char s2[10];
	std::string s1 = "hello";
	std::string s2;

	s2 = s1; // strcpy( s2, s1)
	if (s1 == s2)	// strcmp(s2, s1) == 0
	{
	}
	std::string s3 = s1 + s2;
	std::cout << s3 << std::endl;
}
