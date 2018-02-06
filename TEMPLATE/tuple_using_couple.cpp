/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : tuple_using_couple.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/
template<typename T, typename U> struct couple
{
	T v1;
	U v2;
	enum { N = 2 };
};

// couple�� ����ȭ ���
struct Null {}; // empty class(struct), sizeof(Null) : 1  
				// �ƹ� ����� ������ �и��� Ÿ���̴�.
				// 1. �Լ� �����ε��̳�
				// 2. ���ø� ���ڷ� �ַ� Ȱ��

template<typename P1 = Null,
	typename P2 = Null,
	typename P3 = Null,
	typename P4 = Null,
	typename P5 = Null> class xtuple : public couple<P1, xtuple<P2, P3, P4, P5, Null>>
{
};

// 2���� �����ϴ� xtuple�� ���� �κ� ����ȭ
template<typename P1, typename P2>
class xtuple<P1, P2, Null, Null, Null> : public couple<P1, P2>
{
};



int main()
{
	//								  couple<short, long>  
	//						couple<char, xxtuple<s, l, Null, Null, Null>>
	//			couple<double, xtuple<c, s, l, Null, Null>>
	// couple<int, xtuple<d, c, s, l, Null>>
	xtuple<int, double, char, short, long> t5; // ��� ������ �߰��Ѱ��� �����Ƿ�
											  // �θ�� ����� ����. �θ� �˸� �� ��ü�� �����
											  // �˼� �ִ�.

	xtuple<int, int, int> t3;
}




