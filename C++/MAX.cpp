#include <iostream>
using namespace std;

int Max(int x[][3])
{
    int max = 0;
    for (int i = 0 ; i < 2 ; i++)
    {
        for ( int j = 0; j < 3 ; j++)
        {
            if (max < x[i][j])
            {
                int temp = max;
                max = x[i][j];
            }    
        }
    } 
    return max;
}
int main()
{
    int myArray[2][3] = { {99,33,55} , {4,110,2} };
    int max;
    max = Max(myArray);
    cout<<max;
    
    return 0;
}