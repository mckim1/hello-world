/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <cstdlib>

int main()
{
	int cnt = 0;

	std::cout << "학생수 ? >>";
	std::cin >> cnt;

	// 학생수 만큼의 메모리 할당이 필요하다.
	int jumsu[cnt];  // g++  ok
					 // vc++ error

	int* jumsu = (int*)malloc(sizeof(int)*cnt);

	free(p);
	
}
