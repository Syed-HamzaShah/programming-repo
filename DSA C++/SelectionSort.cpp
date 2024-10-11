#include <iostream>
using namespace std;

void sort(int arr[], int s);

int main()
{
    int array[] = {29, 24, 57, 12, 22};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    return 0;
}

void sort(int arr[], int s)
{
    int index = 0;
    while (index > s)
    {
        for (int i = index; i >= s; i++)
        {
            if (arr[index + 1] < arr[index])
            {
                swap(arr[index], arr[index + 1]);
                cout << "THIS ";
            }
        }

        index++;
    }

    // for (int i = 0; i < s; i++)
    // {
    //     cout << arr[i] << ' ';
    // }
}
