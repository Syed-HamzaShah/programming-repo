#include <iostream>
using namespace std;

class e
{
    int num1;
    int num2;
    static int counter;

public:
    void getdata(int, int);
    void getshata(e, e);
    void showdata(void);
};

void e::getdata(int x, int y)
{
    num1 = x;
    num2 = y;
}

void e::getshata(e ob[], e ob)
{
    num1 = ob[1].num1 + ob[2].num1;
    num2 = ob[1].num2 + ob[2].num2;
}

void e::showdata(void)
{
    cout << num1 << endl;
    cout << num2 << endl;
}

int e::counter = 0;

int main()

{
    e ob[3];
    ob[0].getdata(1, 2);
    ob[0].showdata();
    ob[1].getdata(3, 4);
    ob[1].showdata();
    ob[2].getdata(ob[0], ob[1]);
    ob[2].showdata();

    return 0;
}