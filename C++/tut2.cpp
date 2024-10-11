#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    srand(time(NULL));
    int x = (rand() % 6) + 1;
    int y = (rand() % 6) + 1;

    cout << x << ' ' << y;

    return 0;
}