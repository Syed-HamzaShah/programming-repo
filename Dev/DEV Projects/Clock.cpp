#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int hour, minute, second;
    bool correctChoice = false;

    do
    {
        cout << "Enter the Hour : " << endl;
        cin >> hour;
        cout << "Enter the Minute : " << endl;
        cin >> minute;
        cout << "Enter the Second : " << endl;
        cin >> second;

        if (hour < 24 && minute < 60 && second < 60)
            correctChoice = true;
        else
            system("CLS");
    } while (correctChoice == false);

    while (1)
    {
        
        while (true)
        {
        	cout << hour << " : " << minute << " : " << second << endl;
        	Sleep(1000);
        	system("CLS");
        	second++;
            if (second > 60)
            {
                second = 1;
            }
            if (minute > 60)
            {
                minute = 0;
                
            }
            if (hour > 24)
            {
                hour = 0;
            }
        }
    }

    return 0;
}