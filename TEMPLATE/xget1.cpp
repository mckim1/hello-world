#include <iostream>
using namespace std;

struct Base
{
	int value = 10;
};
struct Derived : public Base
{
	int value = 20;
};
int main()
{
	Derived d;

	cout << d.value << endl; // 20
	cout << (static_cast<Base>(d)).value << endl;  // 10. 임시객체 생성
	cout << (static_cast<Base&>(d)).value << endl; // 10. 임시객체 생성
		
	(static_cast<Base>(d)).value = 30;	// error
	(static_cast<Base&>(d)).value = 30;	// ok

}
