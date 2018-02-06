/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : couple.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std; 

template<typename T> void printN(const T& a) { cout << T::N << endl; }


// ������ Ÿ�� 2���� �����ϴ� ����ü 
template<typename T, typename U> struct couple
{
	T v1;
	U v2;

	static constexpr int N = 2;
};

// 2��° ���ڰ� recursive�϶��� ���� �κ�����ȭ
template<typename A, typename B, typename C> struct couple<A, couple<B, C>>
{
	A         v1;
	couple<B, C> v2;
	static constexpr int N = couple<B, C>::N + 1; // �ٽ�!
};

template<typename A, typename B, typename C> struct couple<couple<A, B>, C>
{
	couple<A, B>  v1;
	C         v2;
	static constexpr int N = couple<A, B>::N + 1; // �ٽ�!
};

template<typename A, typename B, typename C, typename D> struct couple<couple<A, B>, couple<C, D>>
{
	couple<A, B>  v1;
	couple<C, D>  v2;
	static constexpr int N = couple<A, B>::N + couple<C, D>::N; // �ٽ�!
};


int main()
{
	couple<couple<int, int>, couple<int, int>> d4; 

	printN(d4); // 4���;� �մϴ�.
}




/*
int main()
{
	couple<couple<int, int>, int> d3;
	couple<couple<couple<int, int>, int>, int> d4;

	printN(d3); // 3
	printN(d4); // 4 ������ �غ�����
}
*/

/*
int main()
{
	couple<int, double> d2;
	couple<int, couple<int, int>> d3;
	couple<int, couple<int, couple<int, int>>> d4;

	printN(d2); // 2
	printN(d3); // 3
	printN(d4); // 4
}
*/


