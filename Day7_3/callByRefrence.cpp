//declare function and call it byr refrence
#include<iostream>
using namespace std;
    void evenOrOdd(int &a) // call by refrence 
    {
        if(a%2==0)
        {
            cout<<"the given number is even:  "<<a<<endl;
        }
        else{
            cout<<"the given number is odd:  "<<a<<endl;
        }
    }

void evenOrOdd(int &);

int main(){
    int x;
    cout<<"enter the number you wanted to check"<<endl;
    cin>>x;
    evenOrOdd(x);// function calling 
}