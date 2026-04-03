#include <iostream>
#include <iomanip>   // for formatting
using namespace std;

int main()
{
    int age;
    float salary;
    char grade;
    string name;

    // -------- Input Operations --------
    cout << "Enter your name: ";
    getline(cin, name);   // full line input

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter grade: ";
    cin >> grade;

    // -------- Output Operations --------
    cout << "\n--- User Details ---\n";
    cout << "Name   : " << name << endl;
    cout << "Age    : " << age << endl;
    cout << "Salary : " << salary << endl;
    cout << "Grade  : " << grade << endl;

    // -------- Formatted Output --------
    cout << "\n--- Formatted Output ---\n";
    cout << setw(10) << "Name"
         << setw(10) << "Age"
         << setw(10) << "Salary" << endl;

    cout << setw(10) << name
         << setw(10) << age
         << setw(10) << salary << endl;

    return 0;
}