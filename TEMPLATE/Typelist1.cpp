#include <iostream>
using namespace std;

// Andrei Alexandrescue, loki ���̺귯��, Modern C++ Design

// 1. ���� �������� �ʴ´�.
// 2. N���� Ÿ���� �����Ѵ�.
template<typename T, typename U> struct Typelist
{
	typedef T Head;
	typedef U Tail;
};

int main()
{
	Typelist<int, double> t1; //
	Typelist<int, Typelist<int, double>> t2; //
	Typelist<int, Typelist<int, Typelist<char, double>>> t3; //

}











