/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// template.cpp

// �Լ��� ����� ���� Ʋ
template<typename T> 
//template<class T>
T square(T a)
{
	return a * a;
}
// min
int main()
{
//	square<int>(3);		// int square(int) �Լ� ����
//	square<double>(3.3);// double square(double)

	square(3);
	square(3.3);
}
