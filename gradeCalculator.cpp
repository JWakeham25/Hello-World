#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullName;
    cout << "Enter a students full name" << endl;
    cin >> fullName;
    cout << "Enter the students grade selection" << endl;
    cout << "1: Greater than 80\n2: Between 70 and 80\n3: Between 60 and 70\n4: Between 50 and 60\n5: Between 40 and 50\n6: Less than 40" << endl;
    int studentsGrade;
    cin >> studentsGrade;
    return 0;
}