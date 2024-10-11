//  Write a C++ program to create a class called Rectangle that has private member variables for length and width.
//  Implement member functions to calculate the rectangle's area and perimeter.
#include <iostream>
using namespace std;

class Rectangle
{
    double length;
    double width;

public:
    Rectangle(double x, double y) : length(x), width(y) {}

    double Area(void);
    double Perimeter(void);
};

double Rectangle::Area(void)
{
    return length * width;
}

double Rectangle::Perimeter(void)
{
    return (length * 2) + (width * 2);
}

int main()
{
    Rectangle r(22, 31);
    cout << "Area is " << r.Area() << endl;
    cout << "Perimeter is " << r.Perimeter() << endl;

    return 0;
}