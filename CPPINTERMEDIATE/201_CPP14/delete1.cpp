#include <iostream>
using namespace std;

void foo(int n)
{
	cout << "foo(int)" << endl;
}

//void foo(double); // 선언만.

//void foo(double) = delete;

int main()
{
	foo(3.4); // foo(double)
}
