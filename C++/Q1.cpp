// Write a C++ program to implement a class called Circle that has private member variables for radius.
// Include member functions to calculate the circle's area and circumference.
#include <iostream>
using namespace std;

class Circle
{
    double radius;

public:
    void Area(void);
    void Circumference(void);
};

void Circle::Area(void)
{
    cout << "Enter the radius " << endl;
    cin >> radius;

    double area;
    area = (3.14) * (radius * radius);

    cout << "The area is " << area << endl;
}

void Circle::Circumference(void)
{

    cout << "Enter the radius " << endl;
    cin >> radius;

    double circumference;
    circumference = 2 * (3.14) * radius;

    cout << "The circumference is " << circumference << endl;
}

int main()
{
    Circle c;
    c.Area();
    c.Circumference();

    return 0;
}