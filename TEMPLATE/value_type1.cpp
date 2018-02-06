/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : value_type1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <vector>
#include <list>
using namespace std;

/*
void print_first_element(vector<int>& c)
{
	int n = c.front();
	cout << n << endl;
}
*/

/*
template<typename T> void print_first_element(vector<T>& c)
{
	T n = c.front();
	cout << n << endl;
}
*/

template<typename T> void print_first_element(T& c)
{
	// T : list<double>
	// �츮�� �ʿ��Ѱ��� double �� �ʿ��ϴ�.
	// ? n = c.front();

	// ��� �����̳ʴ� �ڽ��� �����ϴ� Ÿ���� value_type���� �˷��ش�.
	typename T::value_type n = c.front();

	// C++11 auto��밡��.
	//auto n = c.front();

	cout << n << endl;
}


int main()
{
	//vector<int>    v = { 1,2,3,4,5 };
	//vector<double> v = { 1,2,3,4,5 };
	list<double> v = { 1,2,3,4,5 };

	print_first_element(v);
}

