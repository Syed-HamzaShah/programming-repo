// Write a C++ program to create a class called Car that has private member variables for company, model, and year.
// Implement member functions to get and set these variables.
#include <iostream>
using namespace std;

class Car
{
private:
    string company;
    string model;
    int year;

public:
    void setData(void);
    void getData(void);
};

void Car::setData(void)
{
    int temp;
    cout << "Enter the Car company" << endl;
    getline(cin >> ws, company);
    cout << "Enter your Car model" << endl;
    getline(cin >> ws, model);
    cout << "Enter the year" << endl;
    cin >> temp;
    if (temp > 2000)
        year = temp;
    else
    {
        cout << "Your Car is very old" << endl;
        exit(1);
    }
}

void Car::getData(void)
{
    cout << "Your Car company is " << company << endl;
    cout << "Your Car model is " << model << endl;
    cout << "Your Car year is " << year << endl;
}

int main(void)
{
    Car c;
    c.setData();
    c.getData();

    return 0;
}