// Write a C++ program to implement a class called Shape with virtual member functions
// for calculating area and perimeter. Derive classes such as Circle, Rectangle, and Triangle
// from the Shape class and override virtual functions accordingly.

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual void Area(void) = 0;
    virtual void Perimeter(void) = 0;
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double a) : radius(a) {}

    void Area(void)
    {
        cout << "Area of circle is " << 3.14 * (radius * radius) << endl;
    }

    void Perimeter(void)
    {
        cout << "Perimeter of circle is " << 3.14 * 2 * radius << endl;
    }
};

class Rectangle : public Shape
{
    double length;
    double width;

public:
    Rectangle(double x, double y) : length(x), width(y) {}

    void Area(void)
    {
        cout << "Area of Rectangle is " << length * width << endl;
    }

    void Perimeter(void)
    {
        cout << "Perimeter of Rectangle is " << 2 * (length * width) << endl;
    }
};
class Triangle : public Shape
{
    int side1;
    int side2;
    int side3;

public:
    Triangle(int x, int y, int z) : side1(x), side2(y), side3(z) {}

    void Area(void)
    {
        double s = (side1 + side2 + side3) / 2;
        cout << "Area of Triangle is " << sqrt(s * (s - side1) * (s - side2) * (s - side3)) << endl;
    }

    void Perimeter(void)
    {
        cout << "Perimeter of Triangle is " << side1 + side2 + side3 << endl;
    }
};

int main(void)
{
    Circle c(22);
    c.Area();
    c.Perimeter();

    Rectangle r(22, 21);
    r.Area();
    r.Perimeter();

    Triangle t(2, 3, 5);
    t.Area();
    t.Perimeter();

    return 0;
}