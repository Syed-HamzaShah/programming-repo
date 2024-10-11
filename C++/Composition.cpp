#include <iostream>
using namespace std;

class Engine
{
public:
    void start() { cout << "Engine started!" << endl; }
};

class Car
{
    Engine *engine;

public:
    Car() : engine(new Engine()) {}

    void startCar()
    {
        engine->start();
    }
};

int main()
{
    Car c;
    c.startCar();

    return 0;
}