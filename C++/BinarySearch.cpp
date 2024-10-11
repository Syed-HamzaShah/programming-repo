// Online C++ compiler to run C++ program online
#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int binary(int array[], int high, int low, int find);

int main()
{
    int array[] = {11, 22, 33, 44, 55, 66};
    int size = sizeof(array) / sizeof(int);
    int find;
    int index;

    cout << "Enter the number you want to find : " << endl;
    cin >> find;

    index = binary(array, size - 1, 0, find);

    if (index != -1)
        cout << "Location is : " << index << endl;
    else
        cout << "Not found!" << endl;

    return 0;
}

int binary(int array[], int high, int low, int find)
{

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == find)
            return mid;

        if (array[mid] < find)
            low = mid + 1;

        if (array[mid] > find)
            high = mid - 1;
    }
    return -1;
}