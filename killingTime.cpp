#include <iostream>
using namespace std;

int main(){
    int money;

    cout << "How much change do you have?" << endl;
    cin >> money;

    if(money > 3){
        cout << "Go buy a coffee" << endl;
    }
    else if(money <= 3){
        cout << "Go for a walk around town" << endl;
    }
    else{
        cout << "You haven't inputted a correct data type" << endl;
    }

    return 0;
}