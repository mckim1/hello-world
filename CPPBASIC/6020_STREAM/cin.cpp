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
			std::cout << "����" << std::endl;

			// cin �� ���¸� ��Ÿ���� ��Ʈ�� reset
			std::cin.clear();

			// �Է� ���۸� ����.
			//std::cin.ignore(); // ���� ����
			std::cin.ignore(256, '\n');

			continue;
		}
		break;
	}

	std::cout << n << std::endl;
}



