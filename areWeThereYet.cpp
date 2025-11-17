#include <iostream>
#include <string>
using namespace std;

main(){
    string areWeThere;
    do{
        cout << "Are we there yet?" << endl;
        cin >> areWeThere;
    }while(areWeThere == "N");

    return 0;
}