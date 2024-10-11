#include <iostream>
#include <ctime>
using namespace std;

int userChoice();
int computerChoice();
void winner(int, int);

int main()
{
    cout << "WELOCOME TO THE GAME OF ROCK, PAPER, SCISSORS" << endl;
    int x = userChoice();
    int y = computerChoice();
    winner(x, y);

    return 0;
}

int userChoice()
{
    int choice;
    // bool push = false;
    cout << "Enter your Choice : " << endl;
    cout << "1 = Rock\n";
    cout << "2 = Paper\n";
    cout << "3 = Scissors\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Your choice is Rock " << endl;
        // push = true;
        break;
    case 2:
        cout << "Your choice is Paper " << endl;
        // push = true;
        break;
    case 3:
        cout << "Your choice is Scissors " << endl;
        // push = true;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return choice;
}
int computerChoice()
{
    int n;
    srand(time(NULL));
    n = (rand() % 3) + 1;

    switch (n)
    {
    case 1:
        cout << "Computers choice is Rock " << endl;
        break;
    case 2:
        cout << "Computers choice is Paper " << endl;
        break;
    case 3:
        cout << "Computers choice is Scissors " << endl;
        break;
    }

    return n;
}
void winner(int x, int y)
{
    switch (x)
    {
    case 1:
        if (y == 1)
            cout << "Its a tie" << endl;
        else if (y == 2)
            cout << "You lost" << endl;
        else
            cout << "You won" << endl;
        break;
    case 2:
        if (y == 1)
            cout << "You Won" << endl;
        else if (y == 2)
            cout << "Its a tie" << endl;
        else
            cout << "You lost" << endl;
        break;
    case 3:
        if (y == 1)
            cout << "You lost" << endl;
        else if (y == 2)
            cout << "You Won" << endl;
        else
            cout << "Its a tie" << endl;
        break;
    }
}
