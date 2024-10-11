// Write a C++ program to create a class called Person that has private member variables for name, age and country.
// Implement member functions to set and get the values of these variables.
#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    void setData(void);
    void getData(void);
};

void Person::setData(void)
{
    int a;
    cout << "Enter your Full Name" << endl;
    getline(cin >> ws, name);
    cout << "Enter your age" << endl;
    cin >> a;
    if (a > 18)
        age = a;
    else
    {
        cout << "NOT OLD ENOUGH" << endl;
        exit(1);
    }
    cout << "Enter your country" << endl;
    getline(cin >> ws, country);
}

void Person::getData(void)
{
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
    cout << "Your country is " << country << endl;
}

int main(void)
{
    Person p;
    p.setData();
    p.getData();

    return 0;
}