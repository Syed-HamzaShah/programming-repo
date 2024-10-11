#include <iostream>
using namespace std;

class ReportCard
{
    public:

    int rollNum;
    string Name;
    float gpa;

    void display()
    {
        cout<< "Name is "<<Name<<endl;
        cout<< "Roll num is "<<rollNum<<endl;
        cout<< "Gpa is "<<gpa<<endl;

    }
};


int main()
{

    ReportCard obj;
    obj.gpa = 3.67;
    obj.Name = "Hamza Shah";
    obj.rollNum = 4665;

    obj.display();
   

    return 0;
}