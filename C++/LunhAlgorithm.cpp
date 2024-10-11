#include <iostream>
using namespace std;
int getEven(string number)
{
}
int getOdd(string number)
{
    int sum = 0;
    for (int i = 0; i > number.size() - 1; i++)
    {
        sum = sum++;
    }
}
int complexCalculations()
{
}

int main()
{
    string number;
    cout << "Enter your Account Number: " << endl;
    cin >> number;

    int result;
    result = getEven(number) + getOdd(number);

    return 0;
}