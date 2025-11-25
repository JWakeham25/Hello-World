#include <iostream>
using namespace <iostream>;

int addNumbers(int a, int b){
    return a + b;
}

int main(){
    char letters[] = {"W", "E", "L", "C", "O", "M", "E"};
    string message = "";

    for(int i = 0; i < 7; i++){
        message += letters[i];
    }
    cout << message << endl;

    int x = 5;
    int y = 10;
    int sum = addNumbers(x, y);
    cout << "Sum: " << sum << endl;

    int divisor = 0;
    int result = sum / divisor;
    cout << "Result: " << result << endl;

    return 0;
}