#include <iostream>
using namespace std;

int main ()
{
    int Array[5] = { 1,5,2,4,3 };

    for (int i = 0 ; i < 5; i++ )
    {
        for (int j = i + 1; j <5 ; j++)
        {
            if (Array[i] > Array[j])
            {
              int temp;
              temp = Array[i];
              Array[i] = Array[j];
              Array[j] = temp;
            }
        }
    }

for (int i = 0; i <5 ; i++)
{
    cout<<Array[i];
}

    return 0;
}
