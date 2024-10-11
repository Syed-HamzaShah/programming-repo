#include <iostream>

using namespace std;

class Library {
public:
    Library(string name) : name_(name) {}

    void addBook(Book* book) {
        // Manual memory management (be cautious of memory leaks!)
        books_[num_books_] = book;
        num_books_++;
    }

    ~Library() {
        // Destructor to clean up dynamically allocated memory (important!)
        for (int i = 0; i < num_books_; ++i) {
            delete books_[i];
        }
    }

    string getName() const { return name_; }

private:
    string name_;
    Book* books_[10]; // Assuming a maximum of 10 books (adjust as needed)
    int num_books_ = 0;
};

class Book {
public:
    Book(string title, string author) : title_(title), author_(author) {}

    ~Book() {
        // Destructor to clean up memory if needed (e.g., for custom data)
    }

    string getTitle() const { return title_; }
    string getAuthor() const { return author_; }

private:
    string title_;
    string author_;
};

int main() {
    Library lib("Central Library");
    Book* book1 = new Book("C++ for Dummies", "John Doe"); // Dynamically allocate memory
    lib.addBook(book1);

    // ... add more books if needed

    cout << lib.getName() << " has a book titled: " << book1->getTitle() << endl;

    // Remember to deallocate memory explicitly when done (outside of scope)
    delete book1;

    return 0;
}

