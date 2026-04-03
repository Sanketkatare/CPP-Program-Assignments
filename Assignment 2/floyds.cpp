#include<iostream>
using namespace std;
int count=0;
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<count;
            count++;
        }
        cout<<"\n";
    }
}