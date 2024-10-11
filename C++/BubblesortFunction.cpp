#include <iostream>
using namespace std;

void bubblesort(int Array[][5],int r,int c)
{
    int num = 1;
    while (num < 10)
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c ; j++)
            {
                if(Array[i][j]>Array[i][j+1])
                {
                    int temp;
                    temp = Array[i][j];
                    Array[i][j] = Array[i][j+1];
                    Array[i][j+1] = temp; 
                }
            }
        }
        num = num + 1;
    };

    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c; j++)
        {
            cout<<Array[i][j];
        }
    }
};


int main()
{
    int r,c;
    r = 2;
    c = 5;

    // cout<<"Enter the number of rows and columns";

    // cout<<"\nRows = ";
    // cin>>r;
    // cout<<"\nColumns = ";
    // cin>>c;

    // cout<<"\nEnter the number of elements of the array"<<endl;

    // for(int i = 0; i < r ; i++ )
    // {
    //     for(int j = 0; j < c; j++)
    //     {
    //         cin>>Array[i][j];
    //     } 
    // } 

    // for(int i = 0 ; i < r ; i++)
    // {
    //     for(int j = 0 ; j < c; j++)
    //     {
    //         cout<<Array[i][j];
    //     }
    // }

    int Array[2][5] = { {6,4,3,2,9} , {1,5,8,0,7}};
    
    bubblesort (Array ,r ,c);

    return 0;
}