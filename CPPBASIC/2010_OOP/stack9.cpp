/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

template<typename T> 
class Stack
{
private:
	T* buf;
	int  idx;
public:
	Stack(int sz = 10)
	{
		buf = new T[sz];
		idx = 0;
	}
	~Stack()	     { delete[] buf; }
	void push(T n) { buf[idx++] = n; }
	
	T  pop();// { return buf[--idx]; }
};


template<typename T>
T  Stack<T>::pop() 
{
	return buf[--idx]; 
}



int main()
{
	Stack<int> s1(20);
	s1.push(30);

	Stack<double> s2(20);

	std::cout << s1.pop() << std::endl;
}





