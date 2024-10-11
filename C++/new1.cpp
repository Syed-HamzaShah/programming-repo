#include <iostream>
#include <string>

using namespace std;

class A
{
private:
    int i = 0;
    string name = "";

public:
    A() {}
    A(int x) : i(x) {}
    A(string x) : name(x) {}

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

    A operator+(const A &other) const
    {
        A temp;
        temp.name = name + other.name;
        return temp;
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

    ++a;
    cout << "Increment " << a.get() << endl;

    --a;
    cout << "Decrement " << a.get() << endl;

    A b("Hamza ");
    A c("Shah");

    A result = b + c;
    cout << result.name << endl;

    return 0;
}
