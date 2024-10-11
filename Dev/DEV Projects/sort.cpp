#include <iostream>
using namespace std;

void bubblesort(int array[], int size);

int main()
{
    int array[] = {10, 92, 83, 71, 62, 75, 84, 93, 20, 1};
    int size = sizeof(array) / sizeof(int);
    bubblesort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}

void bubblesort(int array[], int size)
{
    int x;
    x = size;
    while (x != 0)
    {
        for (int i = 0; i < x - 1; i++)
        {
            // cout << i << endl;
            if (array[i] > array[i + 1])
                swap(array[i], array[i + 1]);
        }
        x--;
    }
}
