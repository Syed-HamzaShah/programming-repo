#include <iostream>
using namespace std;

class a
{
    public:
    void add(int x, int y)
    {
        cout<<x+y;
    }

    void add(int x, int y , int z)
    {
        cout<<x+y+z;
    }


};

int main()

{
    a obj;
    obj.add(8,8,8);
    cout<<"\n";
    obj.add(2,3);
    
    return 0;
}