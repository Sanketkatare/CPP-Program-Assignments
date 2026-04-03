#include<iostream>
using namespace std;
int main()
{
    char a='A';
    for(int i=4;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            char c=(char)j+a;
            cout<<c<<"\t";
            
        }
        cout<<"\n";
    }
}