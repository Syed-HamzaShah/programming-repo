#include<iostream>
using namespace std;

class student {
    public:
    int age ;
    string name;
    void display()
    {
        cout<<"My name is :"<<name<<endl<<"Age is :"<<age<<endl;
    }
};

int main()
{
    student zain;

    
    zain.age = 18;
    zain.name = "Zayn Malik";
    zain.display();

    return 0;
}