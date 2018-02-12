/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// overloading2.cpp

// ok
void f1(int a)    {}
void f1(double a) {}

// ok.
void f2(int a)        {}
void f2(int a, int b) {}

// error
void f3(int a) {}
void f3(int a, int b = 10) {}
f3(1);

// error
int    f4(int a) { return 0; }
double f4(int a) { return 0; }
f4(0);
