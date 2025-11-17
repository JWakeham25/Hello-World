#include <iostream>
using namespace std;

int main(){
    string staff[] = {"Lee", "Sam", "John", "Ron", "Jake", "Coral", "Gary"}; // Creates a string called staff

    for (string name : staff){
        cout << name << endl; // Outputs the variable name
    }

    return 0;
}