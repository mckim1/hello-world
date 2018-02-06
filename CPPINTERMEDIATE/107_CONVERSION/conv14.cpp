/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Intermediate
* Copyright (C) 2018 CODENURI Inc. All rights reserved.
*/

class istream
{
public:
	bool fail() { return false; }

	// C++11 ��ȯ ������ �տ��� explicit�� ���ϼ� �ִ�.
	// �Ͻ��� ��ȯ�� error. ����� ���
	// ��, if ���ȿ����� �Ͻ������� bool�� ��ȯ ���.
	explicit operator bool() { return fail() ? false : true; }
};
istream cin;

int main()
{
	int n = 0;

	//bool b = cin; //error
	bool b = static_cast<bool > (cin); // ok

	//cin << n; // error

	if ( cin ) {}
}
