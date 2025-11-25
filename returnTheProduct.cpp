#include <iostream>
using namespace std;

int num1Input(){
    int num1;
    cout << "Enter a number:" << endl;
    cin >> num1;

    return num1;
}

int num2Input(){
    int num2;
    cout << "Enter a second number:" << endl;
    cin >> num2;

    return num2;
}

int multiply(int num2, int num1){
    int result = num1*num2;
    return result;
}

int main(){
    int result;
    result = multiply(num2Input(), num1Input());
    cout << "The total is " << result << endl;

    return 0;
}