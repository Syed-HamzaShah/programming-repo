#include <iostream>
#include <string>

using namespace std;

class Student;
class Teacher
{
    int tage;
    string tname;

public:
    void setData();
    void getData();

    friend void compare(Teacher, Student);
};

void Teacher::setData()
{
    int h;
    cout << "Enter name: " << endl;
    getline(cin >> ws, tname);
    cout << "Enter age: " << endl;
    cin >> h;
    if (h > 0)
        tage = h;
    else
    {
        cout << "Wrong age!" << endl;
        exit(1);
    }
}

void Teacher::getData(void)
{
    cout << "Your name is " << tname << endl;
    cout << "Your age is " << tage << endl;
}

class Student
{
    int age;
    string name;

public:
    void setData();
    void getData();

    friend void compare(Teacher, Student);
};

void Student::getData(void)
{
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
}

void Student::setData()
{
    int h;
    cout << "Enter name: " << endl;
    getline(cin >> ws, name);
    cout << "Enter age: " << endl;
    cin >> h;
    if (h > 0)
        age = h;
    else
    {
        cout << "Wrong age!" << endl;
        exit(1);
    }
}

void compare(Teacher x, Student y)
{
    if (x.tage > y.age)
        cout << x.tname << " is older! " << endl;
    else if (x.tage < y.age)
        cout << y.name << " is older! " << endl;
    else
        cout << "Both" << x.tname << " and " << y.name << "have the same age!" << endl;
}

int main()
{
    Teacher teacher;
    teacher.setData();
    teacher.getData();

    Student student;
    student.setData();
    student.getData();

    compare(teacher, student);

    return 0;
}