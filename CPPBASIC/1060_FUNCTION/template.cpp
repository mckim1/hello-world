/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// template.cpp

// 함수를 만들어 내는 틀
template<typename T>
//template<class T>
T square(T a)
{
	return a * a;
}
// min
int main()
{
//	square<int>(3);		// int square(int) 함수 생성
//	square<double>(3.3);// double square(double)

	square(3);
	square(3.3);
}
