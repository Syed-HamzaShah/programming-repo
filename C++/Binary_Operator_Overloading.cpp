#include <iostream>
using namespace std;

class Add
{
    double a;
    double b;

public:
    Add() {}
    Add(double x) : a(x), b(x) {}
    Add(double x, double y) : a(x), b(y) {}

    Add operator+(const Add &j)
    {
        Add temp;
        temp.a = a + j.a;
        temp.b = b + j.b;

        return temp;
    }

    Add operator-(const Add &j)
    {
        Add temp;
        temp.a = a - j.a;
        temp.b = b - j.b;

        return temp;
    }

    Add operator*(const Add &j)
    {
        Add temp;
        temp.a = a * j.a;
        temp.b = b * j.b;

        return temp;
    }

    Add operator/(const Add &j)
    {
        Add temp;
        temp.a = a / j.a;
        temp.b = b / j.b;

        return temp;
    }

    void display();
};

void Add::display(void)
{
    cout << "Value of a " << a << endl;
    cout << "Value of b " << b << endl;
}

int main(void)
{
    Add i(22.2);
    Add l(22.1, 12.5);

    Add result = i + l;
    result.display();

    Add result2 = i - l;
    result2.display();

    return 0;
}