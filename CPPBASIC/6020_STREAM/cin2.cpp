/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <string>

int main()
{
	std::string s;

	// std::cin >> s; // "aaa bbb"  단어 입력

	std::getline( std::cin, s ); // 문장 입력

	std::cout << s << std::endl;
}

