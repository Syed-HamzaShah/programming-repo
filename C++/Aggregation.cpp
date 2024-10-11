#include <iostream>
#include <string>

using namespace std;

class Address;
class Person
{
    string name;
    Address *address;

public:
    Person(string name) : name(name), address(nullptr) {}

    void setAddress(Address *obj)
    {
        address = obj;
    }
};

class Address
{
    string street;
    string city;
    string state;
    string zip;

public:
    Address(string x, string y, string z, string f) : street(x), city(y), state(z), zip(f) {}
};

int main()
{
    Address *address = new Address("Street 9", "Peshawar", "KPK", "25000");
    Person person("Hamza Shah");

    person.setAddress(address);

    return 0;
}