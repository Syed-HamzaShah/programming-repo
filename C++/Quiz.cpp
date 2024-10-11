#include <iostream>
using namespace std;

int main()
{
    string questions[] =
        {
            "1. What is the name of a baby puffin bird?\nA. A puffing\nB. A puffine\nC.A puffint",
            "2. Only two mammals enjoy spicy foods: humans and\nA. Pangolin\nB. Armadillo\nC. Tree shrew",
            "3. In 2017, more than 1.2 million people watched online on YouTube a giraffe called April doing what?\nA. To eat ice cream\nB. To give birth\nC. To marry",
            "4. According to the American writer, life is too short to learn which language?\nA. Arabic\nB. German\nC. Chinese",
            "5. How many hearts does an octopus have?\nA. 0\nB. 3\nC. 10",
            "6. Which term refers to a group of pandas?\nA. An embarrassment\nB. A shame\nC. A pity",
            "7. How many months of the year have 28 days in them?\nA. 1\nB. 5\nC. 12",
            "8. A snail can sleep for how long?\nA. 3 days\nB. 3 months\nC. 3 years",
            "9. If you have triskaidekaphobia, you have a fear for what?\nA. Pizza\nB. The number 13\nC. Toilet paper",
            "10. All pandas in the world belong to which country?\nA. China\nB. The United States\nC. Russia",
        };
    int size = sizeof(questions) / sizeof(questions[0]);

    char answers[] = {'A',
                      'A',
                      'A',
                      'A',
                      'A',
                      'A',
                      'A',
                      'A',
                      'A',
                      'A'};
    char choice;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        char temp;
        cout << questions[i] << endl;
        cin >> temp;
        choice = toupper(temp);
        if (choice == answers[i])
        {
            cout << "Correct!" << endl;
            score++;
        }
        else
        {
            cout << "Incorrect!" << endl;
        }
    }

    cout << "Total Questions = " << size << endl;
    cout << "Correct Answers = " << score << endl;
    cout << "Your Score = " << score / (double)size * 100 << " %" << endl;

    return 0;
}