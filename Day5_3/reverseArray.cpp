#include<iostream>
using namespace std;
int main()
{
    int array[6]={1,25,23,56,89,100};
    int array1[6];
    
    for(int i=0;i<=5;i++)
    {
        array1[i]=array[5-i];
    }
    for(int j=0;j<=5;j++)
    {
        cout<<array1[j]<<endl;
    }
}