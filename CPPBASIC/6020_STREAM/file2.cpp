/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::string s;

	//std::cin >> s;
	std::ifstream fin("file2.cpp");
	//fin >> s;

	std::vector<std::string> v;

	while ( std::getline(fin, s) )
		v.push_back(s);


	//std::reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		std::reverse(v[i].begin(), v[i].end());
	}


	for (auto& n : v)
		std::cout << n << std::endl;



	//std::cout << s << std::endl;
}

