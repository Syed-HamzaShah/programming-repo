#include <iostream>
using namespace std;

void sort(int *array, int size);

int main()
{
    int array[] = {10, 92, 83, 711, 622, 75, 84, 93, 200, 1};
    int size = sizeof(array) / sizeof(int);
    sort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}

void sort(int *array, int size)
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