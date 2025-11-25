#include <iostream>
using namespace std;

string nameInput(){
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;

    return name;
}

int ageInput(){
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    return age;
}

string interestsInput(){
    string interests;
    cout << "Enter your interests: " << endl;
    getline(cin, interests);

    return interests;
}
 

void biography(string name, int age, string interests){
    cout << "Hello my name is " << name << ", I am " << age << " years old and like " << interests << endl;
}

int main(){
    biography(nameInput(), ageInput(), interestsInput());
    return 0;
}