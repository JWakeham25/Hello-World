#include <iostream>
using namespace std;

struct Books {
    string title;
    string author;
    string subject;
    int bookID;
};

int main() {
    Books myBook;
    myBook.title = "The Lord of the Rings";
    myBook.author = "J.R.R. Tolkien";
    myBook.subject = "Fantasy";
    myBook.bookID = 12345;

    cout << "Book Title: " << myBook.title << ", " 
    << "Book Author: " << myBook.author << ", " 
    << "Book Subject: " << myBook.subject << ", " 
    << "Book ID: " << myBook.bookID << endl;

    return 0;
}