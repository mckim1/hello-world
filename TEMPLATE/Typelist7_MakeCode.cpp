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

//-------------------------------------------------------------------------------------------
// Typelist Ȱ�� 

// Holder : ���� Ÿ���� data �ϳ� ����..
template<typename T> struct Holder
{
	T value;
};

// GenScatterHierachy  => MakeCode

template<typename T, template<typename> class Unit> 
class MakeCode : public Unit<T> 
{
};

template<template<typename> class Unit>
class MakeCode<NullType, Unit>
{
};

int main()
{
	MakeCode<int, Holder> mc1; // ��� Ŭ���� Holder<int> �̹Ƿ�
	MakeCode<double, Holder>  mc2; // Holder<doulbe>
	MakeCode<NullType, Holder> mc3; // empty
}


