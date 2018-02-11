/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

int main()
{
	int n = 0;

	while (1)
	{
		std::cin >> n;  // 'a' 

		if (std::cin.fail())
		{
			std::cout << "실패" << std::endl;

			// cin 의 상태를 나타내는 비트를 reset
			std::cin.clear();

			// 입력 버퍼를 비운다.
			//std::cin.ignore(); // 한자 비우기
			std::cin.ignore(256, '\n');

			continue;
		}
		break;
	}

	std::cout << n << std::endl;
}



