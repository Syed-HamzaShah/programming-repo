#include <iostream>
using namespace std;

class BaseClass
{
public:
    BaseClass() {}
    void f(char *s = "unknown")
    {

        cout << "functon f() in baseclass callled from " << s << endl;
        h();
    }

protected:
    void g(char *s = "unknown")
    {
        cout << "functon g() in baseclass callled from " << s << endl;
    }

private:
    void h()
    {
        cout << "functon h() in baseclase\n";
    }
};

class DerivedLevel1 : public virtual BaseClass
{
public:
    void f(char *s = "unknown")
    {
        cout << "Function f() in derviedlevel1 called from " << s << endl;
        g("Derviedlevel1");
        h("Derviedlevel1");
    }
    void h(char *s = "unknown")
    {
        cout << "Function h() in derivedlevel1 called from " << s << endl;
    }
};

class Derived2Level1 : public virtual BaseClass
{
public:
    void f(char *s = "unknown")
    {
        cout << "function f() in derivedlevel1 called from  " << s << endl;
        g("derivedlevel1");
        // h();
    }
};

class DerivedLevel2 : public DerivedLevel1, public Derived2Level1
{
public:
    void f(char *s = "unknown")
    {
        cout << "function f() in derivedlevel2 called from " << s << endl;
        g("derivedlevel2");
        DerivedLevel1::h("derivedlevel2");
        BaseClass::f("derivedlevel2");
    }
};

int main(void)
{

    BaseClass bc;
    DerivedLevel1 d1l1;
    Derived2Level1 d2l1;
    DerivedLevel2 dl2;
    bc.f("main(1)");
    d1l1.f("main(2)");
    d1l1.h("main(3)");
    d2l1.f("main(4)");
    dl2.f("main(5)");
    dl2.h();

    return 0;
}