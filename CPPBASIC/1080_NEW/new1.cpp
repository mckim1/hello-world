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

	std::cout << "�л��� ? >>";
	std::cin >> cnt;

	// �л��� ��ŭ�� �޸� �Ҵ��� �ʿ��ϴ�.
	int jumsu[cnt];  // g++  ok
					 // vc++ error

	int* jumsu = (int*)malloc(sizeof(int)*cnt);

	free(p);
	
}