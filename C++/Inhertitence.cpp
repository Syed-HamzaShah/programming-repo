#include <iostream>
using namespace std;

class person
{
    string name;
    int age;

    public:
    void entry()
    {
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your age"<<endl;
        cin>>age;
    }
    
    void  show()
    {
        cout<<"Your name is "<<name<<endl;
        cout<<"Your age is "<<age<<endl;
    }

};

class student: public person
{
    float gpa;
    int rollNum;

    public:
    void s_entry()
    {
        entry();
        cout<<"Enter your gpa"<<endl;
        cin>>gpa;
        cout<<"Enter your Roll number"<<endl;
        cin>>rollNum;
    }
    void s_show()
    {
        show();
        cout<<"Your GPA is "<<gpa<<endl;
        cout<<"Your roll number is "<<rollNum<<endl;
    }

};

int main()
{
    student s1;
    s1.s_entry();
    s1.s_show();

    return 0;
}