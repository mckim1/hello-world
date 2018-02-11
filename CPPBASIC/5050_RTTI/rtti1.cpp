/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <typeinfo>

int main()
{
	int  n1 = 10;
	auto n2 = n1; // n2  int

	const std::type_info& t1 = typeid(n2);  // 연산자
	const std::type_info& t2 = typeid(int);
	const std::type_info& t3 = typeid(3 + 4.5);
	
	std::cout << t3.name() << std::endl;

}
