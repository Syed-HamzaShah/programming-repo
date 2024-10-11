#include <iostream>
#include <string>

using namespace std;

class Test
{
public:
    string name;
    int age;
    double gpa;

    Test(string s, int i, double d) : name(s), age(i), gpa(d) {}

    void PBV(Test a)
    {
        name = a.name;
        age = a.age;
        gpa = a.gpa;
    }
    void PBR(const Test &b)
    {
        name = b.name;
        age = b.age;
        gpa = b.gpa;
    }
    void PBP(const Test *c)
    {
        name = c->name;
        age = c->age;
        gpa = c->gpa;
    }
};

class DriverCode
{
public:
    string name;
    int age;
    double gpa;
};

int main()
{
    Test a("Hamza", 24, 3.7);
    Test b("Mustafa", 20, 3.5);
    Test c("Kamran", 27, 3.3);

    // DriverCode x();
    Test x(a);
    Test y = b;
    Test z = *c;

    return 0;
}