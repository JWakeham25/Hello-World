#include <iostream>
using namespace std;

int main(){
    bool zombieAtDoor = true;
    bool decideToFight =false;

    if (zombieAtDoor) {
        if (decideToFight) {
            cout << "Grab a weapon and fight for your life!" << endl;
        }
        else {
            cout << "Run away, as fast as you can!" << endl;
        }
    } else {
        cout << "Let the civilian in" << endl;
    }

    return 0;
}