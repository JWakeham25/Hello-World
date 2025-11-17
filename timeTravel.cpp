#include <iostream>
#include <string>
using namespace std;

int main(){
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    for (int month = 0; month < 12; month++){
        cout << months[month] << endl;
    }

    return 0;
}