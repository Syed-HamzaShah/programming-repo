#include <iostream>
using namespace std;


int main()
{
    int balls;
    cout<<"Enter the number of balls";
    cin>>balls;
    cout<<"The number of overs are ";
    int a;
    a = (balls/6);
    cout<<a<<endl;
   
    int b;
    b = (balls%6);
    cout<<"."<<b;




    return 0;
}