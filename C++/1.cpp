#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b = 5;
    int a[b] = {91, 44, 23, 177, 67};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }

    for (int z = 0; z < b; z++)
    {
        cout << a[z];
        cout << "\t";
    }

    return 0;
}