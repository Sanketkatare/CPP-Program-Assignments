/*Implement all oprators 
logical ,urnary, turnary, assignment*/
#include <iostream>
using namespace std;

int main ()
{
    int a,b,c=4;
    cin>>a;
    cin>>b; 
    int max = (a > b) ? a : b;    
    cout<<"the addition of the a and b\t"<<a+b<<endl;
    cout<<"the substraction of the a and b\t"<<a-b<<endl;
    cout<<"the multiplication of the a and bt"<<a*b<<endl;
    cout<<"the division of the a and b"<<a/b<<endl;
    cout<<"the large number form the both number is"<<max<<endl;    
    cout<<"post Increament operator "<<a++<<endl;
    cout<<"pre Increament operator "<<++a<<endl;
    cout<<"post decrement operator"<<b--<<endl;
    cout<<"post decrement operator"<<-b<<endl;
    cout<<"operator is "<<~c<<endl;
    if(a>c && a>b)// logical and unary operator
    {
        cout<<"a is bigger"<<a<<endl;

    }else if(a!=b)
    {
        cout<<"both number are not the same "<<endl;
    }

}