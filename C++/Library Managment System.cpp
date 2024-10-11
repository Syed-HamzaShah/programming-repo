#include <iostream>
using namespace std;

class Kitab
{
    public:

    string bookName;

    void addBook(string book)
    {
        bookName = bookName + book;
    }

    void removeBook(string book)
    {
        bookName = bookName - book;
    }

    void showList()
    {
        cout<<bookName;
    }
};

int choice = 0;
int main()
{
    cout<<"Welcome to Central Library"<<endl;
    cout<<"Which acocunt you want to login"<<endl;
    cout<<"1 = Teachers\n2 = Students\n9 = Exit"<<endl;
    cin>>choice;

    while(choice != 9)
    {
         if (choice == 1)
        {   
            int teacherChoice = 0;
            cout<<"1 = Add Book\n2 = Remove Book\n3 = List of Books\n9 = Exit";
            cin>>teacherChoice;
            switch (teacherChoice)
            {
            case 1:
                cout<<"Book Name"<<endl;
                Kitab a;
                cin>>a.addBook;
                break;
            case 2:

            case 3:

            case 9:    
                break;
            
            default:
                cout<<"Invalid Choice";
            }

        if (choice == 2)
        {   
            int studentChoice = 0;
            cout<<"1 = Borrow Book\n2 = Return Book\n3 = List of Books\n9 = Exit";
            cin>>studentChoice;
            switch (studentChoice)
            {
            case 1:
                /* code */
            case 2:

            case 3:

            case 9:    
                break;
            
            default:
               cout<<"Invalid Choice";
            }

        }

    }




    return 0;
}