#include <iostream>
using namespace std;

int main(){
    string Title;
    string Author;
    int Date;

    cout << "What's your favourite book?" << endl;
    std::getline(std::cin, Title);
    cout << "Who's the author?" << endl;
    std::getline(std::cin, Author);
    cout << "What's the publish date?" << endl;
    cin >> Date;

    cout << "\nBook: " << Title << "\nAuthor: " << Author << "\nDate: " << Date << "\n\n";

    return 0;
}