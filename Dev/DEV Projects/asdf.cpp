#include <iostream>
using namespace std;

class add
{
    public:

    int a;
    int b;

    void show()
    {
        cout<<a+b;
    }

};


int main()
{
    add num;
    cin>>num.a;
    cin>>num.b;

    num.show();

    return 0;
}
