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

	// std::cin >> s; // "aaa bbb"  �ܾ� �Է�

	std::getline( std::cin, s ); // ���� �Է�

	std::cout << s << std::endl;
}

