#include<iostream>
using namespace std;

class A
{
public:
A() { cout << "A is constructor" << endl; }
};

class B
{
public:
B() { cout << "B is constructor" << endl; }
};

class C: public B, public A 
{
public:
C() { cout << "C is constructor" << endl; }
};

int main()
{
	C c;
	return 0;
}

