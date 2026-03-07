#include<iostream>
using namespace std;
class student
{
    int roll,dob,marks;
    int arrRoll[10],i=0;
    public:
    student()
    {
        cout<<"no argument";
        roll=00;
        dob=00;
        marks=00;
    }
    student(int a,int b,int c)
    {
        // cout<<"Enter the roll\n";
        // cin>>a;
        roll=a;
        // cout<<"Enter the Date of birth\n";
        // cin>>b;
     
        dob=b;
        // cout<<"enter the total marks\n";
        marks=c;
    }
    void display()
    {
        cout<<"your roll number :"<<roll<<endl;
        cout<<"Date of birth:"<<dob<<"marks"<<marks<<endl;

    }
    void data(){
        cout<<"enter roll number"<<endl;
        cin>>roll;
        for(i;i<=10;i++)
        {
            arrRoll[i]=roll;
            cout<<"the roll number is :"<<arrRoll[i]<<endl;
            break;

        }
        cout<<"enter the date of birth"<<endl;
        cin>>dob;
        cout<<"enter the total marks"<<endl;
        cin>>marks;
    }
};

int main()
{

    student s,s1,s2,s3,s4;
   // student(10,20,23);
    s.display();
    s.data();
    s1.data();
    s2.data();
    // s3.data();
    // s4.data();
    s.display();
    s1.display();
    s2.display();
    // s3.display();
    // s4.display();
}
