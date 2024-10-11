#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Parent Class \n";
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Child Class \n";
    }
};
int main()
{
    B obj;
    obj.show();
    obj.A::show();
    A *ptr;
    ptr = &obj;
    ptr->show();

    return 0;
}