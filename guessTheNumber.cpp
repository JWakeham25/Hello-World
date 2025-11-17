#include <iostream>
using namespace std;

int main(){
    int num = 7;
    int counter = 0;

    while(true){
        cout << "Enter a number between 1 and 10 (Quit by entering 0)" << endl;
        int numberGuess;
        cin >> numberGuess;  //Gets a number input from the user
        counter++; //Adds 1 to the counter

        if(numberGuess == num){
            cout << "Number of guesses: " << counter;
            break; // If the user guesses the correct number
        }
        else if(numberGuess == 0){
            break; // If the user enters 0
        }
    }

    return 0;
}