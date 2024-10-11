#include <iostream>
using namespace std;

int search(int a[], int low, int high, int x);

int main()
{
    int a[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(a) / sizeof(a[0]);

    int tofind = 3;

    int result = search(a, 0, size - 1, tofind);

    if (result == -1)
        cout << "Not found!" << endl;
    else
        cout << "Eleement is at index " << result << endl;

    return 0;
}

int search(int a[], int low, int high, int x)
{

    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            high = mid - 1;

        if (a[mid] < x)
            low = mid + 1;
    }

    return -1;
}