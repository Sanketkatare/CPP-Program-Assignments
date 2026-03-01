#include <iostream>
using namespace std;

class MyDate{
    int day,month,year;
    public:
        void accept()
        {
            cout<<"Enter the Todays Date";
            cin>>day>>month>>year;
        }
        void display(){
            cout<<"The date your enter is "<<day<<"/"<<month<<"/"<<year<<"\n"<<endl;
        }
        void setDay(int a){
            day =a;
            display();
        }
        void setMonth(int b)
        {
            month = b;
            display();
        }
        void setYear(int c)
        {
            year = c;
            display();
        }
       int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
            
        }
};

int main()
{
    MyDate m1;
    m1.accept();
    m1.display();
    m1.setDay(31);
    m1.getDay();
    //m1.display();

}