#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle." << endl;
    }
};
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a rectangle." << endl;
    }
};
int main()
{
    Shape *shapePtr[5];
    // Circle circle;
    // Rectangle rectangle;
    // // shapePtr = &circle;
    // shapePtr->draw();
    // shapePtr = &rectangle;
    // shapePtr->draw();
    int size = sizeof(shapePtr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        int choice;
        cout << "Which shape you want to draw" << endl;
        cout << "1 = Circle\n2 = Rectangle" << endl;
        cin >> choice;

        if (choice == 1)
            shapePtr[i] = new Circle;
        else if (choice == 2)
            shapePtr[i] = new Rectangle;
        else
            shapePtr[i] = new Circle;
    }

    for (int i = 0; i < size; i++)
    {
        shapePtr[i]->draw();
    }

    return 0;
}