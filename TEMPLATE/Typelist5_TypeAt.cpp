#include <iostream>
using namespace std;

template<typename T, typename U> struct Typelist
{
	typedef T Head;
	typedef U Tail;
};
struct NullType {};

#define TYPELIST_1(T1)				Typelist<T1, NullType>
#define TYPELIST_2(T1, T2)			Typelist<T1, Typelist<T2, NullType>>
#define TYPELIST_3(T1, T2, T3)		Typelist<T1, Typelist<T2, Typelist<T3, NullType>>>
#define TYPELIST_4(T1, T2, T3, T4)	Typelist<T1, Typelist<T2, Typelist<T3, Typelist<T4, NullType>>>>
//-----------------------------------------------------------------------------------------------------
// Typelist�� N ��° ����� Ÿ�� ���ϱ�
// 1. ����ϴ� �ڵ带 ���� primary template �ۼ�.
// T : Typelist
template<typename T, int N> struct TypeAt;


// 2. ���ϴ� Ÿ���� ���Ҽ� �ֵ��� �κ�Ư��ȭ
//  T : Typelist�� ��� Ÿ��
/*
template<typename T, typename U, int N> struct TypeAt<Typelist<T, U>, N>
{
	typedef ? type;
};
*/
// N == 0 �϶�.
template<typename T, typename U> struct TypeAt<Typelist<T, U>, 0>
{
	typedef T type;
};

// N != 0 �϶�.
template<typename T, typename U, int N> struct TypeAt<Typelist<T, U>, N>
{
	typedef  typename  TypeAt<U, N-1>::type   type;
};



template<typename T> void test()
{
	typename TypeAt<T, 3>::type n;  // char

	cout << typeid(n).name() << endl;

}


int main()
{
	test<TYPELIST_4(int, char, double, long)>();
}








