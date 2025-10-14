#include <iostream>
#include <string>
using namespace std;

int maain(){
    int distance;
    string petrolOrDiesel;
    float pricePerLitre;
    cout << "Please enter the distance you need to travel" << endl;
    cin >> distance;
    cout << "Please enter whether you use Petrol or Diesel" << endl;
    cin >> petrolOrDiesel;

    if(petrolOrDiesel == "Petrol"){
        float pricePerLitre = 1.33;
    }
    else if(petrolOrDiesel == "Diesel"){
        float pricePerLitre = 1.49;
    }
    else{
        cout << "Please enter Petrol or Diesel" << endl;
        return 0;
    }

    float total = distance * pricePerLitre;

    cout << "Your total price is " << total << endl;

    return 0;
}