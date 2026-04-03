#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int row = 6;
    for(int a=1; a<=row;a++){
        for(int b = 1; b<=row-a;b++)
        {
            cout<<" ";
        }
        for(int c = 1 ; c<= 2*a-1;c++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int a = row-1;a>=1;a--)
    {
        for(int b = row; b>=a;b-- )
        {
            cout<<" ";

        }
        for(int c=1; c<=2*a-1;c++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

   
}