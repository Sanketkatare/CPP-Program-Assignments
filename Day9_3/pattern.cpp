#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a=0;
    for(int row = 0; row<5;row++)
    {
        for(int col=0; col<row;col++)
        {
            if(a<=0)
            {
                a++;
                cout<<a;
            } else{
                a--;
                cout<<a;
            }
            // cout<<"*\t";
        }
        cout<<"\n";
    }
}