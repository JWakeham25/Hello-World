#include <iostream>
using namespace std;

int main(){
    string teamlist[3][4] = {
        {"Newcastle", "Man Utd", "Arsenal", "Chelsea"},
        {"Real Madrid", "Barcelona", "Athletico", "Deportivo"},
        {"Juventus", "Roma", "Inter", "Napoli"}
    };

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << teamlist[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}