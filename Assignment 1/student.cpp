// Q. Write a student class and use it in your program. Store the data of 10 students and display the data according to their roll numbers, dates of birth, and total marks.
// Implement concepts such as :
// -Classes and Objects
// -Constructors
// -Parameterized constructors

#include<iostream>
using namespace std;
class student{
    private:
    string name;    
    int roll_no;
    string dob;
    int totalmarks;
    public:
    student(string n, int r, string d, int m){
        name = n;
        roll_no = r;
        dob = d;
        totalmarks = m;
}
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Total Marks: " << totalmarks << endl;
    }
};
int main()
{
    student s1("Shreyas", 1, "01/01/2000", 85);
    student s2("vivek", 2, "02/02/2000", 90);
    student s3("sachin", 3, "03/03/2000", 80);
    student s4("Sanket", 4, "04/04/2000", 95);
    student s5("Nitin", 5, "05/05/2000", 88);
    student s6("Prathamesh", 6, "06/06/2000", 92);
    student s7("Aditya", 7, "07/07/2000", 87);
    student s8("Varun", 8, "08/08/2000", 91);
    student s9("Rahul", 9, "09/09/2000", 89);
    student s10("Yash", 10, "10/10/2000", 93);

    cout << "Student Details:" << endl;
    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    s3.display();
    cout << endl;
    s4.display();
    cout << endl;
    s5.display();
    cout << endl;
    s6.display();
    cout << endl;
    s7.display();
    cout << endl;
    s8.display();
    cout << endl;
    s9.display();
    cout << endl;
    s10.display();

    return 0;
}
