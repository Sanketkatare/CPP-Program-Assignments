#include<iostream>
using namespace std;
class MyDate{
   int day,month,year;
    public:
    MyDate()    //no arg constructor
    {
        cout<<"no argumented constructor is get called";
        day=10;
        month = 3;
        year = 2026;
    }
    MyDate(int a,int b, int c)
    {
        cout<<"para constructoris get called";
        day=a;
        month=b;
        year=c;
    
    }
    void display()
    {
        cout<<"date is"<<day<<month<<year;
    }
};
int main()
{
    MyDate d;
    d.display();
    
    MyDate d1(12,02,2026);
    d1.display();

}