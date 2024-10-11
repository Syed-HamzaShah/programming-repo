#include <iostream>
using namespace std;

class person
{
    private:
    string name;
    int age;

    public:

    void getdata()
    {
        cout<<"Enter you name: "<<endl;
        cin>>name;
        cout<<"Enter your age: "<<endl;
        cin>>age;
    }

    void displaydata()
    {
        cout<<"Your name is "<<name<<endl;
        cout<<"Your age is "<<endl;
    }
};

class student: public person
{
    private:
    int rollnum;
    float gpa;

    public:
    void getstudentdata()
    {
        getdata();
        cout<<"Enter your roll number: "<<endl;
        cin>>rollnum;
        cout<<"Enter your gpa: "<<endl;
        cin>>gpa;
    }

    void displaystudentdata ()
    {
        displaydata();
        cout<<"Your roll num is "<<rollnum<<endl;
        cout<<"Your gpa is "<<gpa<<endl;
    }

};

class teacher : public person
{
    private:
    int teacherid;

    public:
    void getteachersdata()
    {
        getdata();
        cout<<"Enter you teacher ID "<<endl;
        cin>>teacherid;
    }

    void displayteachersdata()
    {
        displaydata();
        cout<<"Your teachers ID is: "<<teacherid;
    }

};

int main()
{
    student obj;
    obj.getstudentdata();
    obj.displaystudentdata();

   return 0; 
}