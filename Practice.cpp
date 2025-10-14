#include <iostream>
#include <string>
using namespace std;

int main(){
    string book;
    string author;
    string year;
    cout << "Hello, Welcome to my Program." << endl;
    cout << "What is your favourite book?" << endl;
    //cin >> book;
    std::getline(std::cin,book);
    cout << "What is the author's name?\n";
    //cin >> author;
    std::getline(std::cin,author);
    cout << "What year was the book published?" << endl;
    //cin >> year;
    std::getline(std::cin,year);

    cout << "Your favourite book is " << book << endl;
    cout << "The author's name is " << author << endl;
    cout << "The year it was published was " << year << endl;

    return 0;
}