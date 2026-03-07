#include<iostream>
using namespace std;
void area (int = 1);
    void area(int side)
    {
        cout<<"area of the square: "<<side*side<<endl;
    };
    void area(int length, int breadth)
    {
        cout<<"the aread of rectangle is :"<<length*breadth<<endl;
    };
int main()
{
    area(3); //overloaded function get called 
    area(3,4);//overloaded function get called 
}