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
// Typelist�� ��� ���� ���ϱ�.

// 1. ����ϴ� ����� ���� primary template �ۼ�.
template<typename T> struct Length;
//{
//};

// 2. ������ ���Ҽ� �ֵ��� �κ� Ư��ȭ
template<typename T, typename U> struct Length<Typelist<T, U>>
{
	enum { value = Length<U>::value + 1 };
};

// 3. ��͸� ���� �ϱ� ���� ����ȭ(Ư��ȭ)
template<> struct Length<NullType>
{
	enum { value = 0 };
};


template<typename T> void test()
{
	cout << Length<T>::value << endl; // 4
}

int main()
{
	test< TYPELIST_4(int, char, short, double) >();
}








