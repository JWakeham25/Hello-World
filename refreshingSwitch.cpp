#include <iostream>
using namespace std;

int main(){
    cout << "Pick a refreshment" << endl;
    cout << "1: Coffee\n2: Tea\n3: Cola\n4: Beer" << endl;
    int input;
    cin >> input;

    switch(input){
        case 1:
        cout << "Here is your coffee" << endl;
        break;
        case 2:
        cout << "Here is your tea" << endl;
        break;
        case 3:
        cout << "Here is your cola" << endl;
        break;
        case 4:
        cout << "Here is your beer" << endl;
        break;
    }

    return 0;
}