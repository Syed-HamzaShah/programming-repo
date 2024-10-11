#include <iostream>
using namespace std;

class A
{
private:
    int i;

public:
    A(int x) : i(x) {}

    void operator++(int)
    {
        i++;
    }

    void operator--(int)
    {
        i--;
    }

    void operator++()
    {
        ++i;
    }

    void operator--()
    {
        --i;
    }

    int get()
    {
        return i;
    }
};

int main()
{
    A a(5);
    cout << "Original " << a.get() << endl;

    a++;
    cout << "Increment " << a.get() << endl;

    a--;
    cout << "Decrement " << a.get() << endl;

    return 0;
}