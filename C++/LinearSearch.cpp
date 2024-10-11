#include <iostream>
using namespace std;

int search(int array[], int toFind, int size);

int main()

{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(int);
    int toFind;
    int place;

    cout << "Enter the number you want to find : " << endl;
    cin >> toFind;

    place = search(array, toFind, size);

    if (place != -1)
    {
        cout << "Your Number " << toFind << " is at index " << place << endl;
    }
    else
        cout << "Your Number " << toFind << " is not in the list " << endl;
    ;

    return 0;
}

int search(int array[], int toFind, int size)
{
    for (int x = 0; x < size; x++)
    {
        if (array[x] == toFind)
        {
            return x;
        }
    }

    return -1;
}