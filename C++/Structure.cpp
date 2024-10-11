#include <iostream>
using namespace std;



int main()

{
    typedef struct student
{
    string name;
    int age;
    int rollnum;
    float gpa;

    void print()
    {
        cout<<age<<endl;
        cout<<name<<endl;
        cout<<gpa<<endl;
        cout<<rollnum<<endl;
    }
} st;


    // st hamza = {"Syed Hamza Shah",24, 4665,3.7};
    // st hassan = {"hassan Farooq",20,4440,3.5};
    // st faiz = {"Faiz Muhammad ",21,4670,1.8};
    // st umar = {"Umar Khan",20,4669,1.6};
    // hamza.name = "Syed Hamza Shah";
    // hamza.age = 24;
    // hamza.rollnum = 4665;
    // hamza.gpa = 3.7;
    // hassan.print();

    st s[4];
    for (int i = 1; i <= 4; i++)
    {
        cout<<"Name "<<i<<endl;
        cin>>s[i].name;
        cout<<"age "<<i<<endl;
        cin>>s[i].age;
        cout<<"roll num "<<i<<endl;
        cin>>s[i].rollnum;
        cout<<"gpa "<<i<<endl;
        cin>>s[i].gpa;
    }



    return 0;
}