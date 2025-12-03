#include <iostream>
using namespace std;

struct Students {
    string name;
    string email;
    int studentID;
    int averageMark;
};

int main(){
    Students studentList[5];
    for (Students &student : studentList) {
        cout << "Student Name:" << endl;
        getline(cin, student.name);
        cout << "Student Email:" << endl;
        getline(cin, student.email);
        cout << "Student ID:" << endl;
        cin >> student.studentID;
        cout << "Student Average Mark:" << endl;
        cin >> student.averageMark;
        cin.ignore();
        cout << endl;
    }

    return 0;
}