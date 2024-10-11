#include <iostream>
using namespace std;

int search(int a[], int s, int f);

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(a) / sizeof(a[0]);

    int tofind = 3;

    int result = search(a, size, tofind);

    if (result == -1)
    {
        cout << "Element not found!" << endl;
    }
    else
    {
        cout << "Element is at index " << result << endl;
    }
    return 0;
}

int search(int a[], int s, int f)
{
    for (int i = 0; i < s; i++)
    {
        if (a[i] == f)
            return i;
    }
    return -1;
}