#include<iostream>
using namespace std;
// char a;
int main()
{
    for(int i=97;i<=100;i++)
    {
        for(int j=97;j<=i;j++)
        {
            char c=(char)j;
            cout<<c;
        }
        cout<<"\n";
    }
}