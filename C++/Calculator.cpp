#include <iostream>
using namespace std;

void Add(int x, int y)
{
    cout<<"Sum is "<<x+y;
}

void Sub(int x, int y)
{
    cout<<"Sub is "<<x-y;
}

void Mult(int x, int y)
{
    cout<<"Mult is "<<x*y;
}

void Quo(float x, float y)
{
    cout<<"Division is "<<x/y;
}

int main()
{
    float num1,num2;
    int choice;
    cout<<"Enter the first number\n";
    cin>>num1;
    cout<<"Enter the second number\n";
    cin>>num2;
    cout<<"Enter your desired operation\n1 = Add\n2 = Sub\n3 = Mult\n4 = Div\n";
    cin>>choice;

    switch (choice)
    {

    case 1: Add(num1 , num2 );
    break;
    case 2: Sub(num1 , num2 );
    break;
    case 3: Mult(num1 , num2 );
    break;
    case 4: Quo(num1 , num2);
    break;
    default: cout<<"invalid option";

    }


    return 0;
}