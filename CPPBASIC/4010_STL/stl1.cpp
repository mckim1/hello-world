/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <vector>
#include <list>

int main()
{
	//int x[10];
	std::vector<int> v(10);
	v.resize(5);

	//std::list<int> s = { 1,2,3 };
	std::vector<int> s = { 1,2,3 };

	//s.push_front(10);
	s.push_back(10);
	s.push_back(20);
	s.push_back(30);
	//s.pop_back();


	//int n1 = s.pop_back(); // error
	int n2 = s.back(); // 30
	int n3 = s.back(); // 30
	s.pop_back();
	int n4 = s.back(); // 20
}

