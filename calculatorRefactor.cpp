#include <iostream>
using namespace std;
//global variables for calculations
int num1, num2, total;
 
 
//declare functions here

 
int calculatorMenu(){
    cout << "Welcome to the calculator" << endl;
    cout << "---------------------" << endl;
    
    
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    cin >> num1;
    
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    cin >> num2;
    
    cout << "What calculation do you want to perform" << endl;
    cout << "1: Addition \n2: Subtraction\n3: Division\n4: Multiplication" << endl;

    int choice;
    cin >> choice;
    return choice;
}

int calculationChoice(choice){
    if(choice == 1){
        total = num1 + num2;
    }else if(choice == 2){
        total = num1 - num2;
    }else if(choice == 3){
        total = num1 / num2;
    }else if(choice == 4){
        total = num1 * num2;
    }
    return total;
}

void result(total){
    cout << "Result" << endl;
    cout << "---------------------" << endl;
    cout << total << endl;
}

 
 
//define functions here
int main(){
    result(calculationChoice(calculatorMenu()));

    return 0;
}