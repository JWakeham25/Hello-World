#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout << "Please input a number" << endl;
    cin >> num1;
    cout << "Please input another number" << endl;
    cin >> num2;

    int total = num1 + num2;

    cout << num1 << " + " << num2 << " = " << total << endl;

    return 0;
}