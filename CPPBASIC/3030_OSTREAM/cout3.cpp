/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <string>
using namespace std;

/*
// 1998�� ǥ��ȭ ����
class ostream {};	


// 1998�� ǥ��ȭ ����
template<typename T, typename Traits = char_traits<T>>
class basic_ostream
{
	// operator <<( )
	//......
};

typedef basic_ostream<char> ostream;
typedef basic_ostream<wchar_t> wostream;

ostream cout;
wostream wcout;
*/
int main()
{
	cout << "hello";
	wcout << L"hello"; // ���� �ڵ�.

	string s1 = "hello";
	wstring s2 = L"hello";
}
