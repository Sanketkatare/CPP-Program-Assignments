#include<iostream>
using namespace std;
class Date{
    public:
    static int day,month,year;

    public:
    Date()
    {
        cout<<"\n no argument constructor\n"<<endl;
        day=10;
        month=02;
        year = 2026;
    }
    Date(int a, int b, int c)
    {
        cout<<"\n parameter constructor\n"<<endl;
        day=a;
        month = b;
        year = c;

    }

    void display() const{
        cout<<"the number is "<<day<<"/"<<month<<"/"<<year;
    }
    int getDay() const
    {
        return day;
    }
    
};

int Date:: day = 123;
int Date:: month;
int Date:: year;

int main()
{
    Date d;
    d.display();
   // Date d1(10,02,2026);
    const Date d2;   
    d2.display(); 
    d2.getDay();

}