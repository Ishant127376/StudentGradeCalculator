#include<bits/stdc++.h>
using namespace std;

int main() {
    string studentName;
    float marks1, marks2, marks3;

   cout << "===== Welcome to Student Result Portal =====" << endl;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter marks in Subject 1: ";
    cin >> marks1;

    cout << "Enter marks in Subject 2: ";
    cin >> marks2;

    cout << "Enter marks in Subject 3: ";
    cin >> marks3;

    float total = marks1 + marks2 + marks3;
    float percentage = total / 3.0;

    cout << "\n===== Result =====" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Total Marks: " << total << "/300" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    // Grade calculation
    if (percentage >= 90) {
        cout << "Grade: A+" << endl;
    }
    else if (percentage >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 70) {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 60) {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 40) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

