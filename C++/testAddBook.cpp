#include <iostream>
using namespace std;

class addbook
{
    public:

    string book;

    void add(string x)
    {
        book = book + x;
    }

    void show()
    {
        cout<<book;
    }
};

int main()
{

    addbook a;
    string x;
    cout<<"Enter a string";

    cin>>x;
    a.add(x);

    a.show();


    return 0;
}