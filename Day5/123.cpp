#include<iostream>
using namespace std;

class item{
    public:
        static int x;
        int number;
    public: 
        void getdata(int a)
        {
            number = a;
            number++;
            x++;
        }
        void getCount()
        {
            x=10;
            cout<<"value is"<<x<<endl;
        }
        void getcount_1(){
            x++;
            cout<<"valus is\n"<<number<<endl;
            cout<<"value is \n"<<x<<endl;

        }
};

int item::x;
int number=9;
int main()
{
    item a;
    a.getCount();
    a.getdata(100);
    a.getcount_1();
    cout<<number;
    cout<<a.number;
}