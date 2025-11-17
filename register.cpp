#include <iostream>
using namespace std;

int main(){
    string classRegister[5];

    for (int name = 0; name < 5; name++){
        cin >> classRegister[name];
    }

    for (int name = 0; name < 5; name++){
        cout << classRegister[name] << endl;
    }

    return 0;
}