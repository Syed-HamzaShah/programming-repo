#include <iostream>
using namespace std;

class A
{
public:
    A() { cout << "A constructor" << endl; }
    ~A() { cout << "A destructor" << endl; }
};

class B
{
public:
    B() { cout << "B constructor" << endl; }
    ~B() { cout << "B destructor" << endl; }
};

class C : public B, public A
{
public:
    C() { cout << "C constructor" << endl; }
    ~C() { cout << "C destructor" << endl; }
};

int main()
{
    C obj;

    return 0;
}