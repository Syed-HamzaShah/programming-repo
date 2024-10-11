#include <iostream>
using namespace std;

void bubblesort(int array[], int size);

int main()
{
    int array[] = {10, 92, 83, 71, 62, 75, 84, 93, 20, 1};
    int size = sizeof(array) / sizeof(int);
    bubblesort(array, size);
//    cout<<size;

    return 0;
}

void bubblesort(int array[], int size)
{
    int x;
    x = size;
    cout<<x;
    for (int i = 0; i < x - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
//        	cout<<i<<endl;
		}
//            swap(array[i], array[i + 1]);
        x--;
    }

//    for (int i = 0; i < size; i++)
//    {
//        cout << array[i] << endl;
//    }
}
