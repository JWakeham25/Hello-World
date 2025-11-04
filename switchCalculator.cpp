#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    cout << "Pick a calculation" << endl;
    cout << "1: Addition\n2: Subtraction\n3: Multiplication\n4: Division" << endl;
    int input;
    cin >> input;

    switch(input){
        case 1:
        cout << (num1+num2) << endl;
        break;
        case 2:
        cout << (num1-num2) << endl;
        break;
        case 3:
        cout << (num1*num2) << endl;
        break;
        case 4:
        cout << (num1/num2) << endl;
        break;
    }

    return 0;
}