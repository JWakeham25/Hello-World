#include <iostream>
using namespace std;

int unitConverterMenu(){
    cout << "Welcome to the Unit Converter Menu" << endl;
    cout << "1. Celcius to Farenheit" << endl;
    cout << "2. Kilometres to Miles" << endl;
    cout << "3. Kilograms to Pounds" << endl;
    cout << "4. Exit" << endl;

    int unitConverterSelection;
    cout << "Enter a number for your selection:" << endl;
    cin >> unitConverterSelection;

    return unitConverterSelection;
}

float unitConverter(int unitConverterSelection){
    float unitConversion;
    float result;
    if(int unitConverterSelection == 1){
        cout << "Enter a temperature in degrees celcius:" << endl;
        cin << unitConversion << endl;
        result = (unitConversion * 1.8) + 32;
    }
    else if(int unitConverterSelection == 2){
        cout << "Enter a distance in kilometres:" << endl;
        cin << unitCoversion << endl;
        result = unitConversion
    }
    else if(int unitConverterSelection == 3){
        cout << "Enter a weight in kilograms:" << endl;
        cint << unitConversion << endl;
    }
    else{
        break;
    }

    return unitConversion;
}

int main(){
    unitConverterMenu();

    return 0;
}