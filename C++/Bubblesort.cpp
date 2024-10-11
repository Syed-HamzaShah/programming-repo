#include <iostream>
using namespace std;

int main ()
{
    int Array[2][5] = { { 12,55,21,43,34 },{9,7,6,0,8}};
    int num = 1;

while(num <= 10)
{
    for (int i = 0 ; i < 2; i++ )
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            if (Array[i][j] > Array[i][j+1])
            {
              int temp;
              temp = Array[i][j];
              Array[i][j] = Array[i][j+1];
              Array[i][j+1] = temp;
            }
        }
    }
    num += 1;
}
for (int i = 0; i < 2 ; i++)
{
    for(int j = 0 ; j < 5; j++)
    {
        cout<<Array[i][j]<<" ";
    }
}

    return 0;
}
