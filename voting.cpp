#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    if(age >= 18){
        cout << "You are elegible to vote" << endl;
    }
    else if(age < 18){
        cout << "You are too young to vote" << endl;
    }
    else{
        cout << "You have not inputted a correct variable" << endl;
    }

    return 0;
}