#include <iostream>
using namespace std;

void selectionsort(int *array, int size);
void display(int *array, int size);

int main()
{
    int array[] = {10, 92, 71, 0, 5, 21, 44, 21};
    int size = sizeof(array) / sizeof(int);

    selectionsort(array, size);
    display(array, size);

    return 0;
}

void display(int *array, int size)
{
    for (int k = 0; k < size; k++)
    {
        cout << array[k] << endl;
    }
}

void selectionsort(int *array, int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size; j++)
        {
            // cout << i << ' ' << j << endl;
            if (array[i] > array[j + 1])
            {
                swap(array[i], array[j + 1]);
            }
        }
    }
}

