#include <iostream>

using namespace std;

class Student
{
    public:

    int rollNum;
    string Name;

    void display()
    {
        cout<<"Your name is "<<Name<< " and your roll no is "<<rollNum<<"\n"; 
    }
};

int main()
{
    Student Hamza;
    Hamza.rollNum = 4665;
    Hamza.Name = "Syed Hamza Shah";

    Student Hassan;
    Hassan.rollNum = 4235;
    Hassan.Name = "Hassan Farooq";

    Student Umar;
    Umar.rollNum = 4669;
    Umar.Name = "Umar Gul Afridi";

    Student Faiz;
    Faiz.rollNum = 4670;
    Faiz.Name = "Faiz Muhammad";



    Hamza.display();
    Umar.display();
    Faiz.display();
    Hassan.display();


    return 0;
}