#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    A() {}
    A(int a) : x(a) {}

    friend class B;
};

class B
{
    int y;

public:
    B() {}
    B(int b) : y(b) {}

    int add(A &t);
};

int B::add(A &t)
{
    int temp;
    temp = t.x + y;
    return temp;
}

int main()
{
    A a(5);
    B b(6);

    cout << b.add(a) << endl;

    return 0;
}