#include <iostream>
using namespace std;

void sort(int array[][4], int row, int col);
void display(int array[][4], int row, int col);

int main()
{
    int array[][4] = {{1, 3, 4, 2},
                      {7, 2, 9, 0},
                      {10, 8, 5, 11}};

    int row = sizeof(array) / sizeof(array[0]);
    int col = sizeof(array[0]) / sizeof(array[0][0]);

    sort(array, row, col);
    display(array, row, col);
    return 0;
}

void display(int array[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}

void sort(int array[][4], int row, int col)
{
    for (int j = 0; j < row; j++)
    {
        int x = col;
        while (x > 0)
        {
            for (int i = 0; i < x - 1; i++)
            {
                if (array[j][i] > array[j][i + 1])
                    swap(array[j][i], array[j][i + 1]);
            }
            x--;
        }
    }
}
